#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]>x) count++;
    }
    cout<<count<<endl;

}