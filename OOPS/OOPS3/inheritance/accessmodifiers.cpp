// #include<iostream>
// using namespace std;
// class A{
//     public:                              // can be accessed and can be inherited
//     int a_ka_public;
//     protected:                           // can't be accessed and can be inherited
//     int a_ka_protected;
//     private:                             // can't be accessed and can't be inherited
//     int a_ka_private;
// };

// class B : public A{                      // public A means data members and member functions inherited from A are public to class B
//     public:
//     int b_ka_public;
// };

// int main(){
//     B b;
//     // b.a_ka_protected=10;

//     b.a_ka_public=10;
//     b.b_ka_public=100;

// }




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

class B : public A{                       // inherited data members can be accessed in the derived class 
    public:
    int b_ka_public;
    void show(){
        a_ka_protected;
        a_ka_public;
    }

};

int main(){
    B b;
    //b.a_ka_protected=10;
    b.a_ka_public=10;
    b.b_ka_public=100;

}