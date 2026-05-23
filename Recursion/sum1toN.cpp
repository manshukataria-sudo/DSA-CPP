#include<iostream>
using namespace std;
// void add(int sum,int n){
//     if(n==0){
//         cout<<sum<<endl;
//         return;
//     }
//     add(sum+n,n-1);
// }
int add(int n){
    if(n==0) return 0;
    return n+add(n-1);
}
int main(){
    int n=5;
    // add(0,n);
    cout<<add(n)<<endl;
}