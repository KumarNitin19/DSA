#include<iostream>
using namespace std;

int firstOccur(int arr[], int n , int key){
        int start = 0;
        int end = n-1;
        int middle = start + (end-start)/2;
        int ans = -1;
        while(start <= end){
            if(arr[middle] == key){
                ans = middle;
                end = middle-1;
            }else if(arr[middle] > key){
                end = middle-1;
            }else if(arr[middle] < key){
                start = middle+1;
            }
            middle = start + (end-start)/2;
        }
        return ans;
     }

int lastOccurence(int arr[],int n,int key){
      int start = 0, end = n-1,ans = -1;
     int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }else if(arr[mid] < key){
            start = mid+1;
        }else if(arr[mid] > key){
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    int arr[10]={0,0,0,1,1,1,2,2,2,2} ;
    cout<<"First Occurence of 2 in arr is at Index "<<firstOccur(arr,10,2)<<endl;
    cout<<"Last Occurence of 2 in arr is at Index "<<lastOccurence(arr,10,2)<<endl;

    return 0;
}