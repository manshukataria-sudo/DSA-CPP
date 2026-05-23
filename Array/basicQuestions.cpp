#include<iostream>
using namespace std;
int main(){
    int a[5]={35,45,23,12,37};
    for(int i=0;i<5;i++){
        if(a[i]<35) cout<<i+1<<" student have marks less than 35"<<endl;
    }
}