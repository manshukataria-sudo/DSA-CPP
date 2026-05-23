#include<iostream>
#include<vector>
using namespace std;
int correct(vector<int>&nums,int srtIdx,int endIdx){
    int count=0;
    int pivotNum=nums[(srtIdx+endIdx)/2];
    for(int i=srtIdx;i<=endIdx;i++){
        if(i==(srtIdx+endIdx)/2) continue;
        if(nums[i]<=pivotNum) count++;
    }
    return srtIdx+count;
}
void swapAcrossCorrectIdx(vector<int>&nums,int correctIdx,int srtIdx,int endIdx){
    while(srtIdx<correctIdx && endIdx>correctIdx){
        if(nums[srtIdx]<=nums[correctIdx]) srtIdx++;
        if(nums[endIdx]>nums[correctIdx]) endIdx--;
        else if(nums[srtIdx]>nums[correctIdx] && nums[endIdx]<=nums[correctIdx]) swap(nums[srtIdx],nums[endIdx]);
    }
}
int kthSmallest(vector<int>&nums,int k,int srtIdx,int endIdx){
    int correctIdx=correct(nums,srtIdx,endIdx);
    swap(nums[correctIdx],nums[(srtIdx+endIdx)/2]);
    swapAcrossCorrectIdx(nums,correctIdx,srtIdx,endIdx);
    if(k==correctIdx) return nums[correctIdx];
    else if(k<correctIdx) return kthSmallest(nums,k,srtIdx,correctIdx-1);
    else {return kthSmallest(nums,k,correctIdx+1,endIdx);}
}
int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    int n1=sizeof(arr)/sizeof(int);
    vector<int> nums(arr,arr+n1);
    for(int ele:nums){cout<<ele<<" ";}
    cout<<endl;
    int srtIdx=0;
    int endIdx=nums.size()-1;
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    if(k>endIdx+1) cout<<".......INVALID POSITION......."<<endl;
    else cout<<"Aan meri jaan !! "<<endl<<"Smallest element of position "<<k<<" is : "<<kthSmallest(nums,k-1,srtIdx,endIdx)<<endl;

}