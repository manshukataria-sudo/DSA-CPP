#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[10]={10,9,8,7,6,5,4,3,2,1};
    int n=10;
    for(int i=0;i<n-1;i++){
        bool flag=0;
        for(int j=0;j<n-1-i;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
                flag=1;
            }
        }
        if(flag==0) break;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}