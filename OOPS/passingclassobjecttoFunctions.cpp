#include<iostream>
using namespace std;
class player{
    private:
    int health;
    int age;
    int score;
    bool alive;
    public: 
    // setters
    // void setHealth(int health){
    //     player::health=health;
    // }
    // void setAge(int age){
    //     player::age=age;
    // }
    // void setScore(int score){
    //     player::score=score;
    // }
    // void setAlive(bool alive){
    //     player::alive=alive;
    // }
    void setHealth(int health){
        this->health=health;
    }
    void setAge(int age){
        this->age=age;
    }
    void setScore(int score){
        this->score=score;
    }
    void setAlive(bool alive){
        this->alive=alive;
    }
    //getters
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    int getAlive(){
        return alive;
    }
};
int addScore(player a,player b){
     return a.getScore()+b.getScore();
}
player getMaxScore(player a,player b){
    if(a.getScore()>b.getScore()) return a;
    else return b;
}
int main(){
    player a,b;
    a.setAge(20);
    a.setScore(120);
    a.setAlive(true);
    a.setHealth(190);

    b.setAge(30);
    b.setScore(100);
    b.setAlive(true);
    b.setHealth(990);

    //cout<<addScore(a,b)<<endl;
    //cout<<getMaxScore(a,b)<<endl;
    player c=getMaxScore(a,b);
    cout<<c.getAge()<<endl;
    cout<<c.getScore()<<endl;
    cout<<c.getAlive()<<endl;
    cout<<c.getHealth()<<endl;
    


}