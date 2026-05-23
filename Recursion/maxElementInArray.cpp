#include<iostream>
#include<vector>
using namespace std;
int maxOfVector(vector<int>&arr,int i){
    if(i==arr.size()-1) return arr[arr.size()-1];
    return max(arr[i],maxOfVector(arr,i+1));
}
void displayMax(vector<int>&arr,int i,int max){
    if(i==arr.size()){
        cout<<max<<endl;
        return;
    }
    if(arr[i]>max) max=arr[i];
    displayMax(arr,i+1,max);
}
int main(){
    vector<int>arr={1,3,6,-90,0,3,5,647,2,-4657,999};
    cout<<maxOfVector(arr,0)<<endl;
    displayMax(arr,0,INT_MIN);
}