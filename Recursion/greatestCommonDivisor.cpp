#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    return gcd(b%a,a);
}
int main(){
    cout<<gcd(45,27)<<endl;
}
