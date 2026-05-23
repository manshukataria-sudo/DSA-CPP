#include<iostream>
#include<vector>
using namespace std;
void subSeq(vector<int>&nums,int k,vector<int>ans,int i){
    if(i==nums.size()){
        if(ans.size()==k){
            for(int i=0;i<k;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(ans.size()+nums.size()-i>=k){
        subSeq(nums,k,ans,i+1);
        ans.push_back(nums[i]);
        subSeq(nums,k,ans,i+1);
    }
}
int main(){
    int n=5;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        nums[i]=i+1;
    }
    int k=3;
    vector<int>ans;
    subSeq(nums,k,ans,0);
}