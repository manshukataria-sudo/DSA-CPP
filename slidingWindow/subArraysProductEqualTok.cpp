#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={10,5,2,6};
    int n1=sizeof(arr)/sizeof(int);
    vector<int> nums(arr,arr+n1);

    int i=0;
    int j=0;
    int sA=0;
    int n=nums.size();
    int pro=1;
    int k=100;
    while(j<n){
        if(pro<k){j++;pro*=nums[j];}
        else if(pro>=k){
            sA=sA+((j-i)*(j-i+1))/2;
            while(pro>=k){pro/=nums[i];i++;}
            j++;
        }
    }
    cout<<sA<<endl;
    pro=2000;
k=100;
    while(pro>=k){pro/=nums[i];i++;}
    cout<<i<<endl;
}