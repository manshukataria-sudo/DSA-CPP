#include<iostream>
#include<cmath>
using namespace std;
class Bike{
    public:
    int tyreSize;
    int engineSize;
     
    Bike(int tS,int eS):tyreSize(tS),engineSize(eS){}                            // initialising list      
    Bike(int tS): tyreSize(tS),engineSize(150){}                                // constructor overloading
    
};
// void add(int a,int b){
//     cout<<a+b<<endl;
// }
// void add(int a,char b){
//     cout<<a+b<<endl;
// }
int calculateArea(int l,int b){
    return l*b;
}
int calculateArea(int s){                     //  function overloading same named functions are made just for ease 
            return s*s;                       //  data tye of arguments or no of arguments must be different
}
int calculateArea(double d){
    return d*d*3.1415;
}
double calculateArea(int l1,int l2,int l3){
    double s=(l1*l2*l3)/2;
    return sqrt(s*(s-l1)*(s-l2)*(s-l3));
}
int main(){
    // add(10,20);
    // add(10,'A');
    Bike a(20,100);
    cout<<a.tyreSize<<" "<<a.engineSize<<endl;
    Bike b(30);
    cout<<b.tyreSize<<" "<<b.engineSize<<endl;



}