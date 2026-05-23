#include<iostream>
using namespace std;
// class student{
//     char name[100];
//     int std;
//     int age;
//     int rollno;
// };
class player{
    public:
    int health;
    int score;
};
int main(){
    player a;
    a.health=100;
    a.score=90;
    cout<<a.health<<"\n"<<a.score;

}