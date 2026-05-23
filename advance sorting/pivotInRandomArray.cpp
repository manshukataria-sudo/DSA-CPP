#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={3,5,1,-9,-8,1,4,0,6,-99,999,90,34,-1000,3};
    int n1=sizeof(arr)/sizeof(int);
    vector<int> nums(arr,arr+n1);
    for(int ele:nums){
        cout<<ele<<" ";
    }
    int idx=0;
    for(int i=1;i<nums.size();i++){
        if(nums[0]>nums[i]) idx++;
    }
    cout<<endl<<idx;
}