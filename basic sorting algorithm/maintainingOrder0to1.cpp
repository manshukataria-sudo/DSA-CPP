#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={-19,-12,23,8,-16,100,78,56,-1,-90};
    int n=10;

    for(int i=0;i<n;i++){
        int minIdx=-1;
        int min=INT_MAX;
        for(int j=0;j<n;j++){
            if(arr[j]>0 && arr[j]<min && arr[j]>=i){
                min=arr[j];
                minIdx=j;
            }
            else if(arr[j]<0 && arr[j]<min && arr[j]<=i){
                min=arr[j];
                minIdx=j;
            }
        }
        arr[minIdx]=i;
    }
    for(int ele:arr){
       cout<<ele<<" ";
    }

    
}