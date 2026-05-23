#include<iostream>
using namespace std;
// void sumOdd(int a,int b,int sum){
//     if(a>b){
//         cout<<sum<<endl;
//         return;
//     }
//     if(a%2==0) a+=1;
//     if(b%2==0) b-=1;
//     sumOdd(a+2,b,sum+a);
// }
int sum(int a,int b){
    if(a%2==0) a+=1;
    if(b%2==0) b-=1;
    if(b-a==2) return a+b;
    if(a==b) return b;
    return a+b+sum(a+2,b-2);
}
int main(){
    // sumOdd(2,1000,0);
    cout<<sum(0,6)<<endl;
}