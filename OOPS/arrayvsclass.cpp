#include<iostream>
using namespace std;
class player{
    public:
    int health;
    int score;
};
int main(){

    int health[100];
    int score[100];

    player player[100];
    player[0].health=100;
    player[0].score=100;
    player[1].health=190;
    player[99].health=100;
    
    
}