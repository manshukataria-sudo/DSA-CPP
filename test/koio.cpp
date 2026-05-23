#include<iostream>
#include<vector>
using namespace std;
bool isPossible(int mid,vector<int> &weights,int days){
    int day=0;
    int weight=0;
    for(int i=0;i<weights.size();i++){
        weight+=weights[i];
        
    }
    if(day<=days) return 1;
    return 0;
}
int main(){
    vector<int>weights;
    weights.push_back(1);
    weights.push_back(2);
    weights.push_back(3);
    weights.push_back(4);
    weights.push_back(5);
    weights.push_back(6);
    weights.push_back(7);
    weights.push_back(8);
    weights.push_back(9);
    weights.push_back(10);
    cout<<isPossible(12,weights,5)<<endl;
}