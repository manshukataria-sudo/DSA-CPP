#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={2,-3,4,4,-7,-1,4,-2,6};
    int n=sizeof(arr)/sizeof(int);
    vector<int>nums(arr,arr+n);
    int k;
    cout<<"Enter the size of window : ";
    cin>>k;
    vector<int>res(n-k+1);
    int nIdx=0;
    for(int i=0;i<k;i++){
        if(nums[i]<0){res[0]=nums[i];nIdx=i;break;}
    }
    int i=1,j=i+k-1;
    while(j<n){
        if(nIdx>=i) res[i]=nums[nIdx];
        else{
            for(int k=i;k<=j;k++){
                if(nums[k]<0){nIdx=k;
                    res[i]=nums[nIdx];
                    break;
                }
            }
        }
        i++;j++;
    }
    for(int ele:res) cout<<ele<<" ";

}