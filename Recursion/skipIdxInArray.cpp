#include<iostream>
using namespace std;
void skipNum(int nums[],int arr[],int numToSkip,int i,int n){
    if(i==n){
        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }
        return;
    }
    if(arr[i]!=numToSkip){
        nums[i]=arr[i];
        skipNum(nums,arr,numToSkip,i+1,n);
    }
    else{
        nums[i]=-1;
        skipNum(nums,arr,numToSkip,i+1,n);
    }
}
int main(){
    int arr[]={1,2,1,3,4,5,1,2,1,4,1,2,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    int numToSkip=1;
    int nums[size];
    skipNum(nums,arr,numToSkip,0,size);

}