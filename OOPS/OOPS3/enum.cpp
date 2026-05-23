#include<iostream>
#include<vector>
using namespace std;
enum trafficLights{
    red,
    yellow,
    green
};

int main(){
    
    int red=10;
    int yellow=90;
    int green =100;

    cout<<red<<endl;
    cout<<yellow<<endl;
    cout<<green<<endl;

    cout<<trafficLights::red<<endl;
    cout<<trafficLights::yellow<<endl;
    cout<<trafficLights::green<<endl;

}