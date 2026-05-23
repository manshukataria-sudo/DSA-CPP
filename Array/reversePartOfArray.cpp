#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
void rev(vector<int> &v,int i,int j){
    for(i,j;i<j;i++,j--){
        v[i]=v[i]+v[j];
        v[j]=v[i]-v[j];
        v[i]=v[i]-v[j];
    }
}
int main(){
    vector<int> v(5);
    v[0]=1;
    v[1]=2;
    v[2]=3;
    v[3]=4;
    v[4]=5;
    int a,b;
    cout<<"Enter the reversing index : ";
    cin>>a>>b;
    rev(v,a,b);
    display(v);

    
}