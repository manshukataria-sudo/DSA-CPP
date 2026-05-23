#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> twosum(7);
    twosum[0]=1;
    twosum[1]=2;
    twosum[2]=3;
    twosum[3]=4;
    twosum[4]=5;
    twosum[5]=6;
    twosum[6]=7;

    int target=9;
    for(int i=0;i<twosum.size()-1;i++){
        for(int j=i+1;j<twosum.size();j++){
            if(twosum[i]+twosum[j]==target){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }



}