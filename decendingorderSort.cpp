#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sortArray(int arr[] ,int size){
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main(){
    int arr[1000], size;
    cout<<"Enter the size of an array"<<endl;
    cin>>size;
    cout<<"Enter the elements of an array"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    sortArray(arr,size);
    printArray(arr,size);

    return 0;
}