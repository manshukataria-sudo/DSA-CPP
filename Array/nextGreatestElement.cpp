#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int> a(n);
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> b(n);
    int max=-1;
    for(int i=n-1;i>=0;i--){
        b[i]=max;
        if(max<a[i]) max=a[i];
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }

    
}