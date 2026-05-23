#include<iostream>
using namespace std;
int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}
int ncr(int n,int r){
    int c=fact(n)/(fact(n-r)*fact(r));
    return c;
}
int main(){
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
    cout<<"Value of "<<n<<"c"<<r <<" is : "<<ncr(n,r);


}