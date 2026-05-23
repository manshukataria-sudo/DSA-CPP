#include<iostream>
#include<vector>
using namespace std;
void combiSums(vector<int>&nums,vector<int> ans,int i,int target){
    if(target<=0){
        if(target==0){
            for(int k=0;k<ans.size();k++){
                cout<<ans[k]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    for(int j=i;j<nums.size();j++){
        ans.push_back(nums[j]);
        combiSums(nums,ans,j,target-nums[j]);
        ans.pop_back();
    }
}
int main(){
    vector<int> nums={2,3,6,7};
    int target=7;
    combiSums(nums,{},0,target);
}