#include<iostream>
using namespace std;
class A{
    public:
    int a,b;
    public:
    A(){}
    A(int first,int second): a(first), b(second) {}
    A operator + (A &b){
        A *temp=new A;
        temp->a=this->a+b.a;
        temp->b=this->b+b.b;
        return (*temp);
    }
};
int main(){
    A ben(10,20),gwen(1,5);
    A julie(12,90),kevin(6,89);
    
    A c=ben+julie;
    cout<<"a = "<<c.a<<endl;
    cout<<"b = "<<c.b<<endl;

}

