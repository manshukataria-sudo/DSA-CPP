#include<iostream>
using namespace std;
class complexNumber{
public:
    int real;
    int imaginary;

    // complexNumber add(complexNumber &b){
    //     complexNumber c;
    //     c.real=this->real+b.real;
    //     c.imaginary=this->imaginary+b.imaginary;
    //     return c;
    // }

    complexNumber operator +(complexNumber &b){                 // + opreartor is over loaded means redefined
        complexNumber c;
        c.real=b.real+this->real;
        c.imaginary=b.imaginary+this->imaginary;
        return c;
    }
    complexNumber operator -(complexNumber &b){                 // - opreartor is over loaded means redefined
        complexNumber c;
        c.real=b.real-this->real;
        c.imaginary=b.imaginary-this->imaginary;
        return c;
    }
};

int main(){
    complexNumber a,b,m;
    a.real=10;
    a.imaginary=9;
    
    b.real=12;
    b.imaginary=7;
    m.real=12;
    m.imaginary=7;

    // complexNumber c;
    // c.real=a.real+b.real;
    // c.imaginary=a.imaginary+b.imaginary;

    // complexNumber c=a.add(b);
    // cout<<"Real : "<<c.real<<"  "<<"Imaginary : "<<c.imaginary<<endl;

        // complexNumber c=a+b;
        // cout<<"Real : "<<c.real<<"  "<<"Imaginary : "<<c.imaginary<<endl;

        //complexNumber c=a.operator+(b).operator+(m);
        complexNumber c=a+b+m;
        cout<<"Real : "<<c.real<<"  "<<"Imaginary : "<<c.imaginary<<endl;

        complexNumber d=a.operator-(b);
        //complexNumber c=a-(b);
        cout<<"Real : "<<d.real<<"  "<<"Imaginary : "<<d.imaginary<<endl;

    }