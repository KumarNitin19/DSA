#include<iostream>
using namespace std;

long long int  getSqrt(int n){
    long long int start = 0 , end = n-1, ans =0;
    long long int mid = start + ((end-start)/2);
    while(start < end){
        long long square = mid*mid;
        if(square == n){
           return mid;
        }else if(square < n){
            start = mid+1;
        }else if(square > n){
            end = mid-1;
        }
      mid = start + ((end-start)/2);
    }
    return mid;
}

double morePrecision(int n , int pre , int mid){
    double temp =  mid, factor=1;
     
    for(int i=0; i<pre; i++){
       factor = factor/10;
        for(double j = temp; j*j<n; j+=factor){
           temp = j;
        }
    }
    return temp;
}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    long long int square = getSqrt(n);

    cout<<"Squareroot of "<<n<<" is "<<morePrecision(n,3,square)<<endl;

    return 0;
}