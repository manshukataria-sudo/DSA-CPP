#include<iostream>
using namespace std;
void evenOdd(int a){
    if(a%2==0) cout<<a<<" is a even number"<<endl;
    else cout<<a<<" is a odd number"<<endl;
}
int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    evenOdd(a);
}