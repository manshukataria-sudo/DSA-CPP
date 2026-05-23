#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b :  ";
    cin>>b;
    swap(a,b);
    cout<<"After swapping : "<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}