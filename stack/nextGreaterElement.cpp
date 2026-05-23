#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
vector<int> nextGreater(vector<int>&nums){
    int n=nums.size();
    vector<int>ans(n,-1);
    if(nums.size()==1) return ans;
    stack<int>temp;
    temp.push(-1);
    for(int i=n-1;i>=0;i--){
        if(temp.top()<=nums[i]){
            while(temp.size()>0){
                if(temp.top()>nums[i]){
                    ans[i]=temp.top();
                    break;
                }
                else temp.pop();
            }
            temp.push(nums[i]);
        }
        else{
            ans[i]=temp.top();
            temp.push(nums[i]);
        }
    }
    return ans;
}
int main(){
    vector<int>nums={3,5,6,1,5,6,7,3,4,2,6,4,3,5,6,7,2};
    vector<int>ans=nextGreater(nums);
    for(int ele:ans){
        cout<<ele<<" ";
    }
}
