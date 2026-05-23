// #include<iostream>
// using namespace std;
// class Bike{
//     public:
//     int tyreSize;

//     Bike(){                                     // default constructor
//         cout<<"Constructer is called"<<endl;
//     }
// };
// int main(){
//     Bike tvs;           //object creation         constructer ko call jayegi
//     Bike honda;
//     Bike hero;

// }



// #include<iostream>
// using namespace std;
// class Bike{
//     public:
//     int tyreSize;

//     Bike(int tyreSize){                                     // default constructor
//         cout<<"Constructer is called"<<endl;
//         this->tyreSize=tyreSize;
//     }
// };
// int main(){
//     Bike tvs(12);           //object creation         constructer ko call jayegi
//     cout<<tvs.tyreSize<<endl;
//     Bike honda(13);
//     cout<<honda.tyreSize<<endl;
//     Bike hero(14);
//     cout<<hero.tyreSize<<endl;
// }


// #include<iostream>
// using namespace std;
// class Bike{
//     public:
//     int tyreSize;
//     int engineSize;

//     Bike(int tyreSize,int engineSize){                                     // default constructor
//         cout<<"Constructer is called"<<endl;
//         this->tyreSize=tyreSize;
//         this->engineSize=engineSize;
//     }
// };
// int main(){
//     Bike tvs(12,100);           //object creation         constructer ko call jayegi
//     cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
//     Bike honda(13,150);
//     cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;
//     Bike hero(14,120);
//     cout<<hero.tyreSize<<" "<<hero.engineSize<<endl;



// }



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

    Bike(int tyreSize,int engineSize){                                     // parametrized constructor
        cout<<"Constructer is called"<<endl;
        this->tyreSize=tyreSize;
        this->engineSize=engineSize;
    }
};
int main(){
    Bike tvs(12,100);           //object creation         constructer ko call jayegi

    cout<<tvs.getTyreSize()<<" "<<tvs.getEngineSize()<<endl;
    
    


}