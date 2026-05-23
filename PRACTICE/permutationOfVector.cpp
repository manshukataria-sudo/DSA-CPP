#include<iostream>
#include<vector>
using namespace std;
void printPerm(vector<int>nums,vector<int>ans){
    if(nums.size()==0){
        for(int ele:ans){
            cout<<ele<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=0;i<nums.size();i++){
        ans.push_back(nums[i]);
        vector<int>helper;
        for(int j=0;j<nums.size();j++){
            if(j!=i) helper.push_back(nums[j]);
        }
        printPerm(helper,ans);
        ans.pop_back();
    }
}
int main(){
    vector<int>nums={1,2,3};
    int n=4;
    printPerm(nums,{});
    // 1 2 3 
    // 1 3 2
    // 2 1 3
    // 2 3 1
    // 3 1 2
    // 3 2 1
}