#include<iostream>
using namespace std;
class Gun{
    private:
    string name;
    int headDamage;
    int damage;
    string scope;
    public:
    void setName(string name){
        this->name=name;
    }
    void setHeadDamage(int headDamage){
        this->headDamage=headDamage;
    }
    void setDamage(int damage){
        this->damage=damage;
    }
    void setScope(string scope){
        this->scope=scope;
    }
    string getName(){
        return name;
    }
    int getHeadDamage(){
        return headDamage;
    }
    int getDamage(){
        return damage;
    }
    string getScope(){
        return scope;
    }
};
class Helmet{
    private:
    int hp;
    int level;
    public:
    void setHp(){
        if(level==1) hp=50;
        else if(level==2) hp=60;
        else if(level==3) hp=70;
        else cout<<"INVALID LEVEL";
    }
    void setLevel(int level){
        this->level=level;
    }
    int getHp(){
        return hp;
    }
    int getLevel(){
        return level;
    }
};
int main(){
    Gun a;
    a.setName("AKM");

}