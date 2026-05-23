#include<iostream>
using namespace std;
int main(){
    int arr[5]={5,3,1,4,2};
    int n=5;
    for(int i=0;i<n-1;i++){
        int k=-1;
        int min=INT_MAX;
        int j=i;
        while(j<n){
            if(arr[j]<min){
                min=arr[j];
                k=j;
            }
            j++;
        }
        swap(arr[k],arr[i]);
    }
    for(int ele:arr){
            cout<<ele<<" ";
        }

}