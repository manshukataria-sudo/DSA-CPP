#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0 || n==1) return 1;
    return n*factorial(n-1);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int pro=1;
    for(int i=1;i<=n;i++){
        pro*=i;
        cout<<pro<<endl;
    }
    


    // cout<<factorial(n);
}