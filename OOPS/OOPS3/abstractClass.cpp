#include<iostream>
using namespace std;
class Vehicle{
    public:
    int tyreSize;
    int engineSize;                     //Vehicle is an abstract class now and its object can't be made 

    virtual void calculateMilage()=0;   // decalaration of virtual function takes place and they must be over ride in child class unless they provide error 
    virtual void refuel()=0;
};
class Bike :public Vehicle{
    public:
    int handleSize;
    void calculateMilage(){
        cout<<"Milage is 20"<<endl;
    }
    void refuel(){
        cout<<"Refueling via petrol"<<endl;
    }
};
int main(){
    // Vehicle a;
    // a.calculateMilage();


    Bike tvs;
    tvs.calculateMilage();
    tvs.refuel();
    Vehicle *ptr;
    ptr=&tvs;
    (*ptr).calculateMilage();
    (*ptr).refuel();


}