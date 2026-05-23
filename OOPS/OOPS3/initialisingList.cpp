#include<iostream>
using namespace std;
class Bike{
    public:
    int tyreSize;
    int engineSize;
     
    Bike(int tS,int eS):tyreSize(tS),engineSize(eS){}                            // initialising list      
        
    
};

int main(){

    

    Bike hero(15,100);
    cout<<hero.engineSize<<" "<<hero.tyreSize<<endl;
    Bike bajaj(18,350);
    
    cout<<bajaj.engineSize<<" "<<bajaj.tyreSize<<" "<<endl;
    


}