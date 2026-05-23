#include<iostream>
#include<string>
using namespace std;
class Car{
private:
string company;
string model;
int year;
public:
void setCompany (string company) {this->company=company;}
void setModel(string model){this->model=model;}
void setYear(int year) {this->year=year;}
string getCompany() { return company;}
string getModel(){return model;}
int getYear(){return year;}
};
int main(){
Car c;
c.setCompany("Tesla");
c.setModel("S Plaid");
c.setYear (2025);
cout<<c.getCompany()<<endl;
cout<<c.getModel()<<endl;
cout<<c.getYear()<<endl;
}
