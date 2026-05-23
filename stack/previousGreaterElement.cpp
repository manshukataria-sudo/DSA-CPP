#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> prevGreaterEle(vector<int>&nums){
    int n=nums.size();
    vector<int>ans(n,-1);
    if(n==1) return ans;
    stack<int>temp;
    temp.push(nums[0]);
    ans[0]=-1;
    for(int i=1;i<n;i++){
        while(temp.size()>0 && temp.top()<=nums[i]){
            temp.pop();
        }
        if(temp.size()==0) ans[i]=-1;
        else ans[i]=temp.top();
        temp.push(nums[i]);
    }
    return ans;
}
int main(){
    vector<int>nums={3,1,2,5,4,6,2,3};  
    vector<int>ans=prevGreaterEle(nums);
    for(int ele:ans){
        cout<<ele<<" ";
    }
}
