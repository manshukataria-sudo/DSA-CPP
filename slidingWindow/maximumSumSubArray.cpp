// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int arr[]={7,1,2,5,8,4,9,3,6};
//     int n1=sizeof(arr)/sizeof(int);
//     vector<int> nums(arr,arr+n1);
//     int k;
//     cout<<"Enter the size of window : ";
//     cin>>k;
//     int maxSum=INT_MIN;
//     for(int i=0;i<=nums.size()-k;i++){
//         int sum=0;
//         for(int j=i;j<i+k;j++){
//             sum+=nums[j];
//         }
//         if(maxSum<sum) maxSum=sum;
//     }
//     cout<<maxSum<<endl;
// }


// sliding window algorithm                 // optimised

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n1=sizeof(arr)/sizeof(int);
    vector<int> nums(arr,arr+n1);
    int k;
    cout<<"Enter the size of window : ";
    cin>>k;
    int sum=0;
    for(int i=0;i<=k-1;i++) sum+=nums[i];
    int maxSum=sum;
    int i=1,j=i+k-1;
    while(j<nums.size()){
        sum=sum+nums[j]-nums[i-1];
        if(maxSum<sum) maxSum=sum;
        i++;
        j++;
    }
    cout<<maxSum<<endl;
    
}