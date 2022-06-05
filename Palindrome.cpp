#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter value you want to check"<<endl;
    cin>>x;
     int value = x,ans=0,digit;
        while(x !=0 ){
            digit = x%10;
            x = x/10;
            if(ans > INT_MAX/10 || ans < INT_MIN/10 ){
                return 0;
            }
            ans = (ans*10)+digit;
        }
        if(ans == value && ans >= 0)
        {
            cout<<"value is palindrome"<<endl;
        }else{
            cout<<"value is not palindrome"<<endl;
        }  
    return 0;
}