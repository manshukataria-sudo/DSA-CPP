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
    virtual void show(){
        cout<<"Mai A ka show hu"<<endl;                 //*vptr and vtable are made at background for virtual function for every class   
    }                                                   // and during run time compilation virtual functions are called from vtable

};
class B : public A{
    public:
    int b_ka_public;
    void show(){
        cout<<"Aham B show Asmi"<<endl;
    }
};
class C: public B{
    public:
    int c_ka_public;
    virtual void hide(){
        cout<<"C ka hide hu"<<endl;
    }
    void show(){
        cout<<"C ka show hu"<<endl;
    }

};

int main(){
    //B b;
    // b.B::show();
    // b.A::show();
    // a.show();
    // ptr->a_ka_public=100;
    //(*ptr).b_ka_public;        
    
    // A a;                        // compiler POV     A type ka hai
    // A *ptr;                     // run time POV     B ka address hai
    // // ptr=&a;                  // run time binding ---> virtual         // compile time binding
    // ptr=new B; 
    // (*ptr).show();                        
    // ptr=new A;      
    // (*ptr).show();                
    
    // B *ptr2;
    // ptr2=new C;
    // (*ptr2).show();
    
    A a;
    B b;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;

}