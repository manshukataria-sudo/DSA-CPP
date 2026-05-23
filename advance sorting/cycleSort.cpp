// #include<iostream>
// #include<vector>
// using namespace std;
// void cycleSort(vector<int>&nums){
//     int n=nums.size()-1;
//     int i=0;
//     while(i<=n){
//         if(nums[i]==i+1) i++;
//         else swap(nums[i],nums[nums[i]-1]);
//     }
// }
// int main(){
//     int arr[]={8,1,2,7,3,4,6,5,10,9,11,15,13,12,14};
//     int n1=sizeof(arr)/sizeof(int);
//     vector<int>nums(arr,arr+n1);
//     for(int ele:nums) cout<<ele<<" ";
//     cycleSort(nums);
//     cout<<endl;
//     for(int ele:nums) cout<<ele<<" ";

// }


#include<iostream>
#include<vector>
using namespace std;
int cycleSort(vector<int>&nums){
    
}
int main(){
    int arr[]={1,4,5,2,0};
    int n1=sizeof(arr)/sizeof(int);
    vector<int>nums(arr,arr+n1);
    for(int ele:nums) cout<<ele<<" ";
    cout<<endl;
    //for(int ele:nums) cout<<ele<<" ";
    cout<<cycleSort(nums);
}