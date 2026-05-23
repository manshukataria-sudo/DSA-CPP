#include<iostream>
using namespace std;
class player{
    public:
    int health=0;
    int score=0;
};
int main(){
    player a;
    cout<<a.score<<endl;
    a.score=100;
    cout<<a.score<<endl;
    
    cout<<a.health<<endl;


}