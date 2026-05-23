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
    char getTier(char tier){
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
        this->tier=tier;
        this->engine=engine;
        this->tyreSize=tyreSize;
        this->isOffroad=isOffroad;
    }
    
    
   

    
};
int main (){
    Car a,b;


}