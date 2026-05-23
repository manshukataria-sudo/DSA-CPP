#include<iostream>
#include<cmath>
using namespace std;
// void rec1ToN(int start,int n){
//     if(start>n) return;
//     cout<<start<<endl;
//     rec1ToN(start+1,n);
// }
void rec1ToN(int n){
    if(n==0) return;
    rec1ToN(n-1);
    cout<<n<<endl;
}
int main(){
    // int n;
    // cout<<"Enter a number : ";
    // cin>>n;
    // rec1ToN(n);

    double ans=log2(8.9);
    int x=ans;
    cout<<x<<endl;

    cout<<ans<<endl;
    cout<<ans-x<<endl;
    if(ans-x==0) cout<<true<<endl;
}