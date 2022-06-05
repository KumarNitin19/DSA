#include<iostream>
using namespace std;

int peakValue(int arr[], int n){
    int start =0, end =n-1, mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start = mid+1;
        }else{
            end = mid;
        }
        mid=start+(end-start)/2;
    }
    return arr[start];
}

int main(){
       int arr[10]={0,1,2,3,2,4,3,2,1,2};
       cout<<"Peak value is "<<peakValue(arr,10)<<endl;
       return 0;
}