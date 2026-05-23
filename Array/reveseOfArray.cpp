#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int> v1(n);
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    vector<int> v2(n);
    for(int i=0,j=n-1;i<n;i++,j--){
        v2[j]=v1[i];
    }
    cout<<"Reversed array is : ";
    for(int i=0;i<n;i++){
        cout<<v2[i]<<" ";
    }

}