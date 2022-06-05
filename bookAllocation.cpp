#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int mid, int m){
            int studentCount = 1;
            int pageSum = 0;
            for(int i=0; i<n; i++){
                if(pageSum + arr[i] <= mid){
                    pageSum += arr[i];
                }else{
                    studentCount++;
                    if(studentCount > m || arr[i]>mid){
                        return false;
                    }
                }
            }
     return true;
}


int  allocateBooks(int arr[], int n, int m){
    int start = 0;
    int sum =0;

    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    int end = sum;
    int ans = -1;
    int mid = start + ((end-start)/2);

    while(start < end){
        if(isPossible(arr,n,mid,m)){
             ans  = mid;
             end = mid-1;
        }else{
             start = mid+1;
        }
        mid = start + ((end-start)/2);
    }
    return ans;
}


int main(){
    int arr[100], m=2,n;
    cout<<"Enter size of array"<<endl;
    cin>>n;

    cout<<"Enter elements of array"<<endl;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Answer is "<<allocateBooks(arr,n,m)<<endl;
}