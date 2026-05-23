#include<iostream>
#include<vector>
using namespace std;
void printRev(vector<int> &nums,int i){
    if(i==nums.size()) return;
    printRev(nums,i+1);
    cout<<nums[i]<<" ";
}
vector<int> rev(vector<int> &nums,int i,int j){
    if(j-i==0 || i>j) return nums;
    swap(nums[i],nums[j]);
    return rev(nums,i+1,j-1);
}
int indexOf(vector<int>& nums,int target,int i){
    if(i==nums.size()) return -1;
    if(nums[i]==target) return i;
    return indexOf(nums,target,i+1);
}
int main(){
    vector<int> nums={0,1,2,3,4,5,6,7,8};
    // printRev(nums,0);
    // cout<<endl;
    // vector<int> ans=rev(nums,0,nums.size()-1);
    // for(int ele : nums){
    //     cout<<ele<<" ";
    // }
    // cout<<endl;

    cout<<indexOf(nums,9,0)<<endl;
}