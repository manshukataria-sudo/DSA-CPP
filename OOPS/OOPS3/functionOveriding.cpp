#include<iostream>
using namespace std;
class A{
    public:
    int a_ka_public;
    protected:
    int a_ka_protected;
    private:
    int a_ka_private;
    public:
    void show(){
        cout<<"Mai A ka show hu"<<endl;
    }
};
class B : public A{
    public:
    int b_ka_public;
    void show(){
        cout<<"Aham B show Asmi"<<endl;
    }
};

int main(){
    B b;
    b.B::show();
    b.A::show();
    
    A a;
    // a.show();

    // A *ptr;
    // // ptr=&a;
    // ptr=&b;                         // ** exception          // parent's pointer can store the address of derived or child's class

    // (*ptr).a_ka_public=100;         //data members of A are accessed only and stored for B 
    // (*ptr).show();                  // show() function is called of A class 
    // // ptr->a_ka_public=100;
    // //(*ptr).b_ka_public;           // inaccessible     because ptr is of A
    

}