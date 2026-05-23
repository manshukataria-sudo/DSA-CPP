#include<iostream>
#include<string>
using namespace std;
class Person{
private:
string name;
int age;
string country;
public:
void setName(string name) {this->name=name;}
void setAge(int age){this->age=age;}
void setCountry (string country) {this->country=country;}
string getName(){return name;}
int getAge(){return age;}
string getCountry(){return country;}
};
int main(){
Person p;
p.setName("Nayan");
p.setAge(20);
p.setCountry("India");
cout<<p.getName()<<endl;
cout<<p.getAge()<<endl;
cout<<p.getCountry()<<endl;
}