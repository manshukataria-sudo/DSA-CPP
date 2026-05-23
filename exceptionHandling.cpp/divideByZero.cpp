#include<iostream>
using namespace std;
int main(){
    double a,b;
    cout<<"Enter the dividend : ";
    cin>>a;
    cout<<"Enter the divisor : ";
    cin>>b;
    try{
        if(b==0) 
            throw 101;
            
        double c;
        c=a/b;
        cout<<"Quotient is : "<<c<<endl;
    }
    catch(...){
        cout<<"Exception : divide by zero not possible"<<endl;
    }

}