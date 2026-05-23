#include<iostream>
#include<vector>
using namespace std;
vector<int> nextGreatest(vector<int> &height){
    int max=-1;
    vector<int> nextGreatest(height.size());
    for(int i=height.size()-1;i>=0;i--){
        nextGreatest[i]=max;
        if(max<height[i]) max=height[i];
    }
    return nextGreatest;

}
vector<int> prevGreatest(vector<int> &height){
    int max=-1;
    vector<int> prevGreatest(height.size());
    for(int i=0;i<height.size();i++){
        prevGreatest[i]=max;
        if(max<height[i]) max=height[i];
    }
    return prevGreatest;

}
int trap(vector<int> &height){
    int water=0;
    vector<int> backGreatest=prevGreatest(height);
    vector<int> frontGreatest=nextGreatest(height);
    for(int i=0;i<height.size();i++){
        cout<<backGreatest[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<height.size();i++){
        cout<<frontGreatest[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<height.size();i++){
        water=water+min(frontGreatest[i],backGreatest[i]);
    }
    return water;

}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int>height(n);
    cout<<"Enter the elemnets of array : ";
    for(int i=0;i<n;i++){
        cin>>height[i];
    }
    cout<<trap(height)<<" units water"<<endl;
    
    
}