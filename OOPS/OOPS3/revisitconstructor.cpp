#include<iostream>
using namespace std;
class Car{
    private:
    char tier;
    int engine;
    int tyreSize;
    bool isOffroad;
    public: 
    void setTier(char tier){
        this->tier=tier;
    }
    void setEngine(int engine){
        this->engine=engine;
    }
    void settyreSize(int tyreSize){
        this->tyreSize=tyreSize;
    }
    void setisOffroad(bool isOffroad){
        this->isOffroad=isOffroad;
    }
    char getTier(){
        return tier;
    }
    int getEngine(){
        return engine;
    }
    int gettyreSize(){
        return tyreSize;
    }
    int getisOffroad(){
        return isOffroad;
    }

    Car (){
    cout<<"Constructor is called"<<endl;
    }
    Car(char tier,int engine,int tyreSize,bool isOffroad){
        cout<<"Parametrized constructor is called"<<endl;
        this->tier=tier;
        this->engine=engine;
        this->tyreSize=tyreSize;
        this->isOffroad=isOffroad;
    }
    ~Car(){
        cout<<"Destructor is called"<<endl;
    }
    
};
int main (){
    Car a('A',1000,20,0),b('S',2000,30,1);
    cout<<a.getTier()<<endl;
    cout<<b.getTier()<<endl;


}