#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int> &v){
    for(int i=0,j=v.size()-1;i<j;i++,j--){
        v[i]=v[i]+v[j];
        v[j]=v[i]-v[j];
        v[i]=v[i]-v[j];
    }
}
void display(vector<int> &v){
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    reverse(v);
    display(v);
}


