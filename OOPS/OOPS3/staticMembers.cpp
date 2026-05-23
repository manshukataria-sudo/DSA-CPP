#include<iostream>
using namespace std;
class Bike{
    public:

    static int noOfBikes;
    int tyreSize;
    int engineSize;
     
    Bike(int tyreSize,int engineSize){                                     // default constructor
        //cout<<"Constructer is called"<<endl;
        this->tyreSize=tyreSize;
        this->engineSize=engineSize;

    }

    static void increaseNoOfBikes(){
        noOfBikes++;
    }
};

int Bike::noOfBikes=100;

void print(){
        static int b=10;
        cout<<b<<endl;
        b++;
    }

int main(){

    // print();
    // print();
    // // print();
    // for(int i=0;i<5;i++){
    //     print();
    // }

    Bike hero(15,100);
    // cout<<hero.engineSize<<" "<<hero.tyreSize<<endl;
    Bike bajaj(18,350);
    hero.increaseNoOfBikes();
    bajaj.increaseNoOfBikes();
    cout<<hero.noOfBikes<<" "<<bajaj.noOfBikes<<" "<<endl;
    Bike::increaseNoOfBikes();

    cout<<hero.noOfBikes<<" "<<bajaj.noOfBikes<<" "<<endl;

    // bajaj.noOfBikes=90;
    // cout<<hero.noOfBikes<<" "<<bajaj.noOfBikes<<" "<<endl;

}
