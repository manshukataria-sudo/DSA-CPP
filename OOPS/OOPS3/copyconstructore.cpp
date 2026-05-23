#include<iostream>
using namespace std;
class Bike{
    private:
    int tyreSize;
    int engineSize;
    public: 
    
    //setters
    void setTyreSize(int tyreSize){
        this->tyreSize=tyreSize;
    }
    void setEngineSize(int engineSize){
        this->engineSize=engineSize;
    }
    //getters
    int getTyreSize(){
        return tyreSize;
    }
    int getEngineSize(){
        return engineSize;
    }

    Bike(int tyreSize,int engineSize){                                     // default constructor
        cout<<"Constructer is called"<<endl;
        this->tyreSize=tyreSize;
        this->engineSize=engineSize;
    }

    ~Bike(){
        cout<<"Destructor is called"<<endl;                                 // destructor to destroy object or free up memoery
    }

    Bike (Bike &tvs){
        cout<<"Copy constructor is called"<<endl;
    }
};
int main(){
    // int a=10;
    // int *p=&a;
    // int b;
    // b=*p;
    // cout<<b<<endl;
    // a=20;
    // cout<<a<<endl;
    // b=*p;
    // cout<<b<<endl;

    // Bike tvs(20,100);
    // tvs.setEngineSize(100);
    // tvs.setTyreSize(20);      
    // cout<<tvs.getTyreSize()<<" "<<tvs.getEngineSize()<<endl;
    // Bike honda;                                                  // shallow copy is made
    // honda=tvs;
    // cout<<honda.getTyreSize()<<" "<<honda.getEngineSize()<<endl;
    // tvs.setEngineSize(1000);
    // tvs.setTyreSize(200);
    // cout<<honda.getTyreSize()<<" "<<honda.getEngineSize()<<endl;




    // to made deep copy, copy constructor should be called

    Bike tvs(20,100);
    // Bike honda=tvs;
    Bike honda(tvs);
    cout<<tvs.getTyreSize()<<" "<<tvs.getEngineSize()<<endl;
    // Bike tvs(200,1000);
    tvs.setTyreSize(200);
    tvs.setEngineSize(1000);
    cout<<tvs.getTyreSize()<<" "<<tvs.getEngineSize()<<endl;
    cout<<honda.getTyreSize()<<" "<<honda.getEngineSize()<<endl;




    
}