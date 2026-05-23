#include<iostream>
using namespace std;
class A{
    private:
    int a_ka_private=10023;
    public:
    friend void show(A &a);
    void show2(){
        cout<<a_ka_private<<endl;
    }
};
void show(A &a){
    cout<<a.a_ka_private<<endl;
}
int main(){
    A a;
    a.show2();
    show(a);
}




// #include<iostream>
// using namespace std;
// class complex{
//     private:
//     int real;
//     int imaginary;
//     int pvt;
//     // complex operator +(complex &b){
//     //     complex c;
//     //     c.real=b.real+this->real;
//     //     c.imaginary=b.imaginary+this->imaginary;
//     //     return c;
//     // }
//     public:
//     void setReal(int real){
//         this->real=real;
//     }
//     void setImaginary(int imaginary){
//         this->imaginary=imaginary;
//     }
//     int getReal(){
//         return real;
//     }
//     int getImaginary(){
//         return imaginary;
//     }
//     friend complex operator +(complex &a,complex &b); 
//     friend class primeNumber;
// };
// complex operator +(complex &a,complex &b){
//     complex c;
//         c.real=b.real+a.real;
//         c.imaginary=b.imaginary+a.imaginary;
//         return c;
// }
// class primeNumber{
//     public:
//     void show(complex &a){
//         a.real=100;
//     }
// };

// int main(){
//     complex a,b,d;
//     a.setReal(1);
//     a.setImaginary(2);
//     b.setReal(10);
//     b.setImaginary(20);
//     //complex c=a.operator+(b);
//     complex c=a+b;
//     cout<<"Real : "<<c.getReal()<<"  "<<"Imaginary : "<<c.getImaginary()<<endl; 
//     primeNumber m;
//     m.show(a);
//     cout<<a.getReal()<<endl;

// }