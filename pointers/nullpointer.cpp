#include<iostream>
using namespace std;
int main(){
    int x;
    int *ptr=&x;
    cout<<ptr<<endl;
    int *p;
    cout<<p<<endl;
    p=0;                         //p=0      p='\0'      both can be used
    cout<<p<<endl<<&p<<endl;

}