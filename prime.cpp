#include<iostream>
using namespace std;
int main()
{
    int n,ul,ll,i,div=0;
    cin>>n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            div++;
        }

    }
    if(div==2)
    {
        cout<<"composite";
    }
    else{
        cout<<"prime number";
    }
    return 0;

}

// int average(int arr[],int n){
//     int sum =0;
//      for(int i=0;i<n;i++){
//          sum = sum + arr[i];
//      }
//      int avg = su