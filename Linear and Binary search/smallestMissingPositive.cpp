#include<iostream>
using namespace std;
int main(){
    int arr[10]={0,1,2,3,5,7,8,9,10,11};
    int lo=0;
    int hi=arr[9];
    int mid;
    int diff=arr[0];
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(arr[mid]!=(diff+mid)){
            if(arr[mid-1]==(diff+mid-1)){cout<<arr[mid-1]+1; break;}
            else { hi=mid;}
        }
        else  lo=mid;
    }
}