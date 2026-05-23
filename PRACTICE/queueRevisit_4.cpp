#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={0,-1,-2,3,4,-5,6,4,7,-8};
    int n=arr.size();
    int k=18;

    queue<int>negIdx;
    int win=n-k+1;
    vector<int>ans(win);

    for(int i=0;i<n;i++){
        if(arr[i]<0) negIdx.push(i);
    }
    int i=0;
    while(i<win){
        while(negIdx.size()>0 && negIdx.front()<i){
            negIdx.pop();
        }
        if(negIdx.size()==0 || negIdx.front()>i+k-1) ans[i]=0;
        else ans[i]=arr[negIdx.front()];
        i++;
    }

    for(int ele:ans){
        cout<<ele<<" ";
    }
}