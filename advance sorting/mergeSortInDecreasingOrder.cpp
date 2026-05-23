#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&arr,vector<int>&brr,vector<int>&res){
    int i=0;
    int j=0;
    int k=0;
    while(i<arr.size() && j<brr.size()){
        if(arr[i]>=brr[j]) res[k++]=arr[i++];
        else res[k++]=brr[j++];
    }
    if(i==arr.size()) while(j<brr.size()) res[k++]=brr[j++];
    else while(i<arr.size()) res[k++]=arr[i++];
}
void mergeSort(vector<int>&arr){
    if(arr.size()==1) return;
    vector<int>p,q;
    for(int i=0;i<arr.size();i++){
        if(i<arr.size()/2) p.push_back(arr[i]);
        else q.push_back(arr[i]);
    }
    //magic aka recursion
    mergeSort(p);
    mergeSort(q);
    merge(p,q,arr);
    p.clear();              // used to delete extra vectors;
    q.clear();
}
int main(){
    int a[]={2,4,1,67,0,-1,-4,89,-8,0,1,3,5,999};
    int n1=sizeof(a)/sizeof(int);
    vector<int> arr(a,a+n1);
    for(int ele:arr) cout<<ele<<" ";
    mergeSort(arr);
    cout<<endl<<"Sorted array is : ";
    for(int ele:arr) cout<<ele<<" ";
}