#include<iostream>
using namespace std;

void uniqueElement(int arr[], int n,int temp[])
{
    
    for (int i=0; i<n; i++)
    {
        int unique = 1;
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                unique++;
                temp[j]=0;
            }
        }
        if(temp[i]!=0){
            temp[i]=unique;
        }
    }

    for (int i=0; i<n; i++){
        if(temp[i] == 1){
            cout<<arr[i]<<" ";
        }
    }

}
 
int main()
{
    int arr[100], temp[100];
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        temp[i]=-1;
    }
     uniqueElement(arr, n,temp);
    return 0;
    
}