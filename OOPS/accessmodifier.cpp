#include<iostream>
using namespace std;
class player{
    private:
    int health;                 // data members
    public:
    int score;
};
int main(){
    player a;
    a.health=100;
    a.score=90;
    cout<<a.health<<endl<<a.score;

    

}