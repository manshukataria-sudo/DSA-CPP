#include<iostream>
using namespace std;
void circle(int a){
    cout<<"Diameter is : "<<2*a<<endl;
    cout<<"Area is : "<<3.14*a*a<<endl;
    cout<<"Circumference is : "<<2*3.14*a<<endl;
}
int main(){
    int a;
    cout<<"Enter the radius of circle : ";
    cin>>a;
    circle(a);
}