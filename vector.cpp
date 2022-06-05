#include<iostream>
#include<vector>
using namespace std;


vector<int> mergeSort(vector<int> v, int m,vector<int> a, int n){
     int i=0, j=0;
        while(j<n){
            v.push_back(a[j]);
            j++;
        }
        sort(v.begin(),v.end());
        int limit = v.size()-1;
       while(i <= limit){
         vector<int>::iterator position = std::find(v.begin(), v.end(), 0);
           if(v[i] == 0){
               v.erase(position);
           }
           i++;
       }
        cout<<endl;
    return v ;
}

void print(vector<int> a){
    for(int i=0; i<a.size(); i++){
           cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
vector<int> v;
vector<int> a;

v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(0);
v.push_back(0);
v.push_back(0);

a.push_back(2);
a.push_back(5);
a.push_back(6);

vector<int> ans = mergeSort(v,6,a,3);
cout<<"Printing the array"<<endl;

print(ans);
return 0;

}