#include<iostream>
using namespace std;
// void nTo1(int n){
//     while(n>=1){
//         cout<<n<<endl;
//         n--;
//     }
//     return;
// }
void nTo1Rec(int n){
    if(n==0) return;
    cout<<n<<endl;
    nTo1Rec(n-1);
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    nTo1Rec(n);
}