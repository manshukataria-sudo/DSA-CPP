#include<iostream>
using namespace std;
int main(){
    int nums[13]={1,2,2,3,3,3,3,3,4,4,5,8,9};
    int target=5;
    int lo=0;
    int hi=12;
    int mid;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(nums[mid]==target && nums[mid-1]!= target){
            cout<<mid<<endl;
            break;
        }
        else if(nums[mid]<target) lo=mid+1;
        else if(nums[mid]>target) hi=mid-1;
        else hi=mid-1;
    }

}