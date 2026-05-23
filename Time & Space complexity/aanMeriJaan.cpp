#include<iostream>
using namespace std;
int main(){
    int arr[11]={1,2,3,4,5,6,7,8,9,10,1};
    int sum=arr[0];
    for(int i=1;i<11;i++){
        sum+=arr[i];
    }
    int actualSum=11*10/2;
    cout<<"Duplicate is "<<sum-actualSum;

}