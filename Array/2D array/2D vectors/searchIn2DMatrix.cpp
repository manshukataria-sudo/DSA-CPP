#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the sorted array : ";
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    int target;
    cout<<"Enter the target value : ";
    cin>>target;
    int fidx=0;
    int lidx=n-1;
    int mid=(fidx+lidx)/2;
    bool flag=false;
    while(lidx-mid!=1 || mid-fidx!=1){
        if(arr[mid]>target){
            lidx=mid;
            mid=(fidx+lidx)/2;
        }
        if(arr[mid]<target){
            fidx=mid;
            mid=(fidx+lidx)/2;
        }
        if(arr[mid]==target || arr[fidx]==target || arr[lidx]==target){
            flag=true;
            break;
        }
    }
    cout<<flag<<endl;
}