#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries){
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int m=queries.size();
        vector<int>preSum(n);
        preSum[0]=nums[0];
        for(int i=1;i<nums.size();i++) preSum[i]=nums[i]+preSum[i-1];
        vector<int>answer(m);
        for(int i=0;i<m;i++){
            int lo=0;
            int hi=n-1;
            int mid;
            bool flag=0;
            while(lo<=hi){
                mid=lo+(hi-lo)/2;
                if(preSum[mid]==queries[i]){answer[i]=mid+1;flag=1; break;}
                else if(preSum[mid]<queries[i]) lo=mid+1;
                else hi=mid-1;
            }
            if(flag==0) answer[i]=hi+1;
        }
    return answer;
}
int main(){
    int arr[]={4,5,2,1};
    int n1=sizeof(arr)/sizeof(int);
    vector<int>nums(arr,arr+n1);
    int brr[]={3,10,21};
    int n2=sizeof(brr)/sizeof(int);
    vector<int>queries(brr,brr+n2);
    vector<int> a=answerQueries(nums,queries);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}