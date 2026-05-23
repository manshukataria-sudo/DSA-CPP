// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> nums(8);
//     for(int i=0;i<nums.size();i++){
//         cin>>nums[i];
//     }
//     int lo=0;
//     int hi=nums.size()-1;
//     int pivot;
//     int mid;
//     while(lo<=hi){
//         mid=lo+(hi-lo)/2;
//         if(nums[mid]<nums[mid-1]){pivot=mid;break;}
//         if(nums[mid-1]<nums[mid] && nums[mid]<nums[mid-1]) lo=mid+1;
//         if(nums[mid-1]<nums[mid] && nums[mid]<nums[mid-1]) hi=mid-1;
//     }
//     cout<<nums[pivot]<<endl;
    
// }