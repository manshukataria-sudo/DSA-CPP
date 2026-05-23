#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    cout<<"hello"<<endl<<endl;
    cout<<flush;
    cout<<setw(10)<<1234<<endl;
    cout<<setprecision(3)<<3.1415926539<<endl;
    cout<<scientific<<0.8967<<endl;
    cout<<noshowpoint<<3.9089009<<endl;
    cout<<fixed<<setprecision(3)<<3.1497<<endl;
    cout<<oct<<32;

}