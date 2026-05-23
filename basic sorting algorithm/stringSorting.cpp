#include<iostream>
using namespace std;
int main(){
    string str="AXBYTERNMUPZZY";
    string ytr;
    for(int i=0;i<str.size();i++){
        if(str[i]>='X'){
            ytr.push_back(str[i]);
        }
    }
    int n=ytr.size();
    for(int i=0;i<n-1;i++){
        bool flag=0;
        for(int j=0;j<n-1-i;j++){
            if(ytr[j+1]>ytr[j]){
                swap(ytr[j+1],ytr[j]);
                flag=1;
            }
        }
        if(flag==0) break;
    }
    cout<<ytr<<endl;
}