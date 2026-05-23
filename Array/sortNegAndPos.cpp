#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int> &v){
    int i=0;
    int j=v.size()-1;
    while(i<j && j-i!=1){
        if(v[i]<0) i++;
        if(v[j]>0) j--;
        if(v[i]>0 && v[j]<0){
            v[i]=v[i]+v[j];
            v[j]=v[i]-v[j];
            v[i]=v[i]-v[j];
            i++;
            j--;
        }

    }
}
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v);
    display(v);
}
