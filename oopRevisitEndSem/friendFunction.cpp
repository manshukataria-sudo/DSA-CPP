#include<iostream>
#include<vector>
#include<ctime>
using namespace std;
class A{
    private:
    int a;
    public:
    void setA(int a) {
        this->a=a;
    }
    int getA(){
        return this->a;
    }
    friend void dost();
};
class B{
    private:
    int b;
    public:
    void setB(int b) {
        this->b=b;
    }
    int getB(){
        return this->b;
    }
    //friend void dost();
};
void dost(){
//     if(B::b()>a.a){
//         cout<<"Greater is : "<<b.getB()<<endl;
//     }
    cout<<a<<endl;
}
int main(){

    A a;
    a.setA(10);
    cout<<a.getA()<<endl;

    B b;
    b.setB(100);
    cout<<b.getB()<<endl;

    dost();

}