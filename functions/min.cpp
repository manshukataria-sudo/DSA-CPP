#include<iostream>
#include<cmath>
int mini(int a,int b){
    if(a<b) return a;
    else return b;

}
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<min(a,b)<<endl;
    cout<<mini(a,b)<<endl;
    cout<<max(a,b)<<endl;
    cout<<sqrt(10);




}