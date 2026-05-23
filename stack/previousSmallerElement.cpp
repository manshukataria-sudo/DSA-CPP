#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> previousSmallerElements(vector<int>&nums){
    int n=nums.size();
    vector<int>pse(n,-1);
    if(n==1 || n==0) return pse;
    stack<int>temp;
    temp.push(nums[0]);
    for(int i=1;i<n;i++){
        while(temp.size()>0 && temp.top()>=nums[i]){
            temp.pop();
        }
        if(temp.size()!=0) pse[i]=temp.top();
        temp.push(nums[i]);
    }
    return pse;
}
int main(){
    vector<int>nums={2,1,5,6,2,3};
    vector<int>pse=previousSmallerElements(nums);
    for(int ele:pse){
        cout<<ele<<" ";
    }
}