#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    cout<<"Enter the 1st  number : ";
    cin>>a;
    cout<<"Enter the 2nd number : ";
    cin>>b;
    cout<<"Sum of "<<a<<" and "<<b<<" is : "<<add(a,b)<<endl;
}