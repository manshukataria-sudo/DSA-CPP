#include<iostream>
#include<string>
using namespace std;
class Rectangle{
private:
double length;
double breadth;
public:
Rectangle(double l, double b): length (1), breadth(b){};
double area(){return (this->length)*(this->breadth);}
double perimeter(){return 2*(this->length+this->breadth);}
};
int main(){
Rectangle a (10,20);
cout<<"Area of the rectangle is: "<<a.area()<<endl;
cout<<"Perimeter of the rectangle is: "<<a.perimeter()<<endl;
}