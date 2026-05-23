#include<iostream>
#include<vector>
using namespace std;
void subSets(vector<int>&arr,int i,vector<int>ans){
    if(i==arr.size()){
        for(int ele:ans){
            cout<<ele<<" ";
        }
        cout<<endl;
        return;
    }
    subSets(arr,i+1,ans);
    ans.push_back(arr[i]);
    subSets(arr,i+1,ans);
}
int main(){
    vector<int> arr={1,2,3};
    vector<int> ans;
    subSets(arr,0,ans);
}