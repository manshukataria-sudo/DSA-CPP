#include<iostream>
using namespace std;
int pow(int a,int b){
    if(b==0) return 1;
    if(b==1) return a;
    int ans=pow(a,b/2);
    ans*=ans;
    if(b%2!=0) ans*=a;
    return ans;
}
int main(){
    int a,b;
    cout<<"Enter the base : ";
    cin>>a;
    cout<<"Enter the power : ";
    cin>>b;
    cout<<pow(a,b);
}