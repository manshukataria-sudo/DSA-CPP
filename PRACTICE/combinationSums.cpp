#include<iostream>
#include<vector>
using namespace std;
void combiSums(vector<int>&nums,int target,vector<int>ans,int i){
    if(target==0){
        for(int k=0;k<ans.size();k++){
            cout<<ans[k]<<" ";
        }
        cout<<endl;
        return;
    }
    if(target<0){
        return;
    }
    for(int j=i;j<nums.size();j++){
        ans.push_back(nums[j]);
        combiSums(nums,target-nums[j],ans,j);
        ans.pop_back();
    }
}
int main(){
    vector<int> nums={2,4};
    int target=8;
    vector<int>ans;
    int i=0;
    combiSums(nums,target,ans,i);

}