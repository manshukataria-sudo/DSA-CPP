// #include<iostream>
// using namespace std;
// class A{
//     public:                        
//     int a_ka_public;
//     protected:                     
//     int a_ka_protected;
//     private:                       
//     int a_ka_private;
//     public:
//     A(){
//         cout<<"A's constructor is called"<<endl;
//     }
// };

// class B : protected A{
//     public:                         
//     int b_ka_public;
//     public:
//     B(){
//         cout<<"B's constructor is called"<<endl;
//     }
// };
// class C : public B{                   
//     public:
//     int c_ka_public;

//     public:
//     C(){
//         cout<<"C's constructor is called"<<endl;
//     }
// };

// int main(){
//     C c;
//     //A's constructor is called
//     //B's constructor is called
//     //C's constructor is called
    

// }


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

};

class B {
    public:                         
    int b_ka_public;
    public:

};
class C : public A,public B{                 // multiple base class and single derived class   
    public:
    int c_ka_public;
    void show(){
        a_ka_protected;
    }
};

int main(){
    C c;
    c.a_ka_public;
    c.b_ka_public;
    c.c_ka_public;

}