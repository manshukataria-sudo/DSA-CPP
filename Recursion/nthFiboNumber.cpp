#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo(n-1)+fibo(n-2);
}
void fiboSeries(int sum,int n){
    
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    // int fiboSl=0;
    // int fiboL=1;
    // int fiboN;
    // if(n==2) fiboN=fiboL;
    // if(n==1) fiboN=fiboSl;
    // for(int i=3;i<=n;i++){
    //     fiboN=fiboL+fiboSl;
    //     fiboSl=fiboL;
    //     fiboL=fiboN;
    // }
    // cout<<fiboN<<endl;

    cout<<fibo(n)<<endl;
    cout<<endl;
    fiboSeries(1,n);

}