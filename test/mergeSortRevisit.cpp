#include<iostream>
#include<vector>
using namespace std;
void mergeArray(vector<int>&a,vector<int>&b,vector<int>&result){
    int i=0;
    int j=0;
    int count=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            result[count]=a[i];
            i++;
        }
        else{
            result[count]=b[j];
            j++;
        }
        count++;
    }
    if(i==a.size()) {while(j<b.size()) {result[count]=b[j];
            j++;count++;}}
    else {while(i<a.size()) {result[count]=a[i];
            i++;count++;}}
}
void mergeSort(vector<int>&nums){
    if(nums.size()==1) return;
    vector<int>fHalf;
    vector<int>sHalf;
    int mid=nums.size()/2;
    for(int i=0;i<mid;i++) fHalf.push_back(nums[i]);
    for(int i=mid;i<nums.size();i++) sHalf.push_back(nums[i]);
    mergeSort(fHalf);
    mergeSort(sHalf);
    mergeArray(fHalf,sHalf,nums);
}
int main(){
    int arr[]={2,4,5,1,6,7,-1,-45,-8,-6,45,6};
    int size=sizeof(arr)/sizeof(int);
    vector<int> nums(arr,arr+size);
    mergeSort(nums);
    for(int ele:nums){
        cout<<ele<<" ";
    }
}