#include<iostream>
using namespace std;
class Bike{
    private:
    int tyreSize;
    int engineSize;
    public: 
    
    // //setters
    // void setTyreSize(int tyreSize){
    //     this->tyreSize=tyreSize;
    // }
    // void setEngineSize(int engineSize){
    //     this->engineSize=engineSize;
    // }
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
};
int main(){
    Bike tvs(12,100);           //object creation         constructer ko call jayegi
    bool flag=true;
    if(flag==true){
        Bike harley(15,500);
        cout<<harley.getTyreSize()<<" "<<harley.getEngineSize()<<endl;     //destructor is called when scope of object is finished
    }
    cout<<tvs.getTyreSize()<<" "<<tvs.getEngineSize()<<endl;
    
    
}