#include<iostream>
using namespace std;
class A{
    public:                        // can be accessed from outside, can be inherited
    int a_ka_public;
    protected:                     // can be accessed from outside, can be inherited
    int a_ka_protected;
    private:                       // can't be accessed from outside,can't be inherited
    int a_ka_private;
};

class B : protected A{                       // inherited data members can be accessed in the derived class 
    public:                         // a_ka_protected, a_ka_public both as protected in class B
    int b_ka_public;
    void showB(){
        a_ka_protected;
        a_ka_public;
    }
};
class C : public B{                   // b_ka_public, as public and a_ka_protected, a_ka_public both as protected in class C
    public:
    int c_ka_public;

    void showC(){
        a_ka_protected;                  //therefore accessible from inside the class but not from outside the class 
        a_ka_public;
    }
};

int main(){
    B b;
    //b.a_ka_protected=10;
    // b.a_ka_public=10;
    // b.b_ka_public=100;

    C c;
    c.c_ka_public=100;
    c.b_ka_public; 

}