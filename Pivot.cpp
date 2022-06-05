#include<iostream>
using namespace std;

int findPivot(int arr[], int size){
    int start=0, end = size-1, mid=start + (end-start)/2;
    while(start<end){
        if(arr[mid]>arr[0]){
            start = mid+1;
        }else{
            end=mid;
        }
        mid=start + (end-start)/2;
    }
    return start;
}

int binarySearch(int arr[], int start, int n, int key){
    int end = n-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid]>key){
            end=mid-1;
        }else{
            start = mid+1;
        }
      mid = start + (end-start)/2;
    }
 return -1;
}


int main(){
    int arr[5]={7,9,1,2,3},key=7;
    int pivot = findPivot(arr,5);
    if(arr[pivot] <= key && arr[4] >= key){
        cout<<"Index is "<< binarySearch(arr,pivot,5,key)<<endl;
    }else{
         cout<<"Index is "<< binarySearch(arr,0,pivot,key)<<endl;
    }
}