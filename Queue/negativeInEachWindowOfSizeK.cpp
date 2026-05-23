#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    vector<int>nums={0,-1,-2,3,4,-5,6,4,7,-8};
    int n=nums.size();

    int k=100;

    queue<int>neg;

    int totalWindows=n-k+1;
    vector<int>ans(n-k+1);

    for(int i=0;i<n;i++){
        if(nums[i]<0) neg.push(i);
    }

    for(int i=0;i<totalWindows;i++){
        if(neg.front()<i) neg.pop();
        if( neg.size()>0 && neg.front()>=i && neg.front()<=i+k-1) ans[i]=nums[neg.front()];
        else ans[i]=0;
    }

    for(int ele:ans) cout<<ele<<" ";
}