#include<iostream>
using namespace std;
int main(){
    int arr[9]={5,0,1,2,0,0,4,0,3};
    int n=9;
    for(int i=0;i<n-1;i++){
        bool flag=0;
        for(int j=0;j<n-1-i;j++){
            if(arr[j+1]!=0 && arr[j]==0){
                swap(arr[j+1],arr[j]);
                flag=1;
            }
        }
        if(flag==0) break;
    }
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    
}