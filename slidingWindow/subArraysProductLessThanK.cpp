#include<iostream>
#include<vector>
using namespace std;                    // using sliding window
int subArray(vector<int>&nums,int target){
    int n=nums.size();
    int i=0;
    int j=0;
    int pro=1;
    int count=0;
    while(j<n){
        pro*=nums[j];
        while(pro>=target){
            count+=(j-i);
            pro/=nums[i];
            i++;
        }
        j++;
    }
    count+=(j-i)*(j-i+1)/2;
    return count;
}
int main(){
    int arr[]={1,5,8,1,5,3,9};
    int n1=sizeof(arr)/sizeof(int);
    vector<int>nums(arr,arr+n1);
    int k=5401;
    int count=subArray(nums,k);
    cout<<count<<endl;
}