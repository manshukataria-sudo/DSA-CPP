#include<iostream>
using namespace std;
class A{
    public:                             
    int a_ka_public;
    protected:                           
    int a_ka_protected;
    private:                             
    int a_ka_private;
};

class B : virtual public A{                      
    public:
    int b_ka_public;
};
class C: virtual public A{
    public:
    int c_ka_public;
};
class D :public B,public C{
    public:
    int c_ka_public;
    void show(){
        // cout<<B::a_ka_public<<endl;
        //       C::a_ka_public;
        cout<<a_ka_public<<endl;
    }
};
int main(){

    D d;
    d.a_ka_public=100;
    d.show();
}