#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int brr[]={3,5,7,9,10};
    vector<int>a(arr,arr+4);
    vector<int>b(brr,brr+5);
    vector<int>c=a+b;
    
}