#include<iostream>
using namespace std;
class player{
    private: 
    int score;
    int age;
    int health;
    bool alive;

    public: 
    void setScore(int score){
        this->score=score;
    }
    void setAge(int age){
        this->age=age;
    }
    void setHealth(int health){
        this->health=health;
    }
    void setAlive(bool alive){
        this->alive=alive;
    }
    int getScore(){
        return score;
    }
    int getAge(){
        return age;
    }
    int getHealth(){
        return health;
    }
    int getAlive(){
        return alive;
    }
};
int main(){
    player a,b;                     // compile time , static memory allocation   in static memory
    a.setAge(20);
    a.setAlive(true);
    a.setScore(0);
    a.setHealth(100);

    b.setAge(30);
    b.setAlive(false);
    b.setScore(1090);
    b.setHealth(0);

    // player *c=new player(b);

    // cout<<(*c).getAlive()<<endl;
    // cout<<(*c).getAge()<<endl;
    // cout<<(*c).getScore()<<endl;
    // cout<<(*c).getHealth()<<endl;

    player *c=new player;       // run time , dynamic memory allocation in heap memory

    // player d=*c;

    // d.setAge(89);
    // cout<<d.getAge()<<endl;

    (*c).setAge(89);
    cout<<(*c).getAge()<<endl;
    c->setAlive(true);
    cout<<c->getAlive()<<endl;


}