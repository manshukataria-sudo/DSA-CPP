#include<iostream>
using namespace std;
int main(){
    int x=90;
    int*p=&x;
    cout<<x<<endl;
    x=50;
    cout<<x<<endl;
    *p=60;
    cout<<x<<endl<<*p<<endl;


}