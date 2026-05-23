#include<iostream>
using namespace std;
bool isPow(int n){
    if(n==1) return true;
    if(n%2!=0 || n<=0) return false;
    return isPow(n/2);
}
int main(){
    cout<<isPow(INT_MAX)<<endl;
}