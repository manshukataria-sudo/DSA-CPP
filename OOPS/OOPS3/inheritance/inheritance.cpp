#include<iostream>
using namespace std;
class Vehicle{                              //parent class , base class
    public:
    int tyreSize;
    int engineSize;
    int lights;
    string companyName;
//     Vehicle(){
//     cout<<"Vehicle's constructor is called"<<endl;
//     }
    void showCompanyName(){
    cout<<companyName<<endl;
    }
 };

// class Car:public Vehicle{ 
//     public:                                 //car inherits vehicle
//     int steeringSize;
// };

class Bike:public Vehicle{                  //derived class ; child class
    public:
    int handleSize;
    // Bike(){
    //     cout<<"Bike's constructor is called"<<endl;
    // }
};


int main(){
    Bike a;
    a.handleSize=12;
    a.engineSize=150;
    a.tyreSize=16;
    a.companyName="HONDA";
    a.showCompanyName();
    cout<<a.handleSize<<" "<<a.engineSize<<" "<<a.tyreSize<<endl;


}