#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &nums,int i){
    if(i==nums.size()) return;
    cout<<nums[i]<<" ";
    print(nums,i+1);
}
int main(){
    vector<int> nums={1,2,3,4,5,6,7,8,9};
    print(nums,0);
}