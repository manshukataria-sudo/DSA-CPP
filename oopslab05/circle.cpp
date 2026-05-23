#include<iostream>
#include<string>
using namespace std;
class Circle{
private:
double radius;
public:
void setRadius (double radius) {this->radius=radius;}
double area(){return 3.1415*(this->radius)*(this->radius);}
double circumference(){return 2*3.1415*this->radius;}
};
int main(){
Circle a;
a.setRadius (7);
cout<<"Area of the circle is: "<<a.area()<<endl;
cout<<"Circumference of the circle is: "<<a.circumference();
}