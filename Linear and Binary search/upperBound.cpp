#include<iostream>
#include<vector>
using namespace std;
int lowerBound(vector<int> &nums,int target){
    int lb;
    int lo=0;
    int mid;
    int hi=nums.size()-1;
    bool flag=false;
    // while(flag!=true){
    //     mid=(lo+hi)/2;
    //     if(hi-lo==1 ){
    //         if(max(nums[lo],nums[hi])<target) lb=max(nums[lo],nums[hi]);
    //         else lb=min(nums[lo],nums[hi]);
    //         flag=true;
    //     }
    //     else if(lo==hi){ 
    //         lb=nums[lo];
    //         flag=true;
    //     }
    //     else if(nums[mid]<target) lo=mid;
    //     else hi=mid-1;
    // }
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(nums[mid]==target){
            return nums[mid+1];
        }
        else if(nums[mid]<target) lo=mid+1;
        else hi=mid-1;
    }
    return nums[lo];
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int m;
    cout<<"Enter a integer : ";
    cin>>m;
    cout<<"Upper bound : "<<lowerBound(nums,m);
}