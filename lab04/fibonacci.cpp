#include<iostream>
using namespace std;
int fibo(int a){
    if(a<=1) return a;
    return fibo(a-1)+fibo(a-2);
}
int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<"Fibonacci sequence up to "<<a<<" digits is : "<<endl;
    for(int i=0;i<a;i++){
        cout<<fibo(i)<<" ";
    }
}