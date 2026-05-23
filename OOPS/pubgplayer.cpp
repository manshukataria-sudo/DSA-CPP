#include<iostream>
using namespace std;
class Gun{
    private:
    int ammo;
    int damage;
    int rate;
    public: 
    void setAmmo(int ammo){
        this->ammo=ammo;
    }
    void setDamage(int damage){
        this->damage=damage;
    }
    void setRate(int rate){
        this->rate=rate;
    }
    int getAmmo(){
        return ammo;
    }
    int getDamage(){
        return damage;
    }
    int getRate(){
        return rate;
    }
};
class Player{
    private:
    class Helmet{
    private:
        int hp;
        int level;
    public:
        void setHp(int hp){
            this->hp=hp;
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
private:
    class Vest{
    private:
        int hp;
        int level;
    public:
        void setHp(int hp){
            this->hp=hp;
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
    char name;
    int score;
    int health;
    bool alive;
    Gun gun;
    Helmet helmet;
    Vest vest;
    public :
    void setName(char name){
        this->name=name;
    }
    void setScore(int score){
        this->score=score;
    }
    void setHealth(int health){
        this->health=health;
    }
    void setAlive(bool alive){
        this->alive=alive;
    }
    void setGun(Gun gun){
        this->gun=gun;
    }
    void setHelmet(int level){
        Helmet *helmet=new Helmet;
        helmet->setLevel(level);
        int health=0;
        if(level==1) health=25;
        else if(level==2) health=50;
        else if(level==3) health=75;
        else cout<<"INVALID LEVEL"<<endl;
        helmet->setHp(health);
        this->helmet=(*helmet);        
    }
    void setVest(int level){
        Vest *vest=new Vest;
        vest->setLevel(level);
        int health;
        if(level==1) health=50;
        else if(level==2) health=75;
        else if(level==3) health=100;
        else  cout<<"INVALID LEVEL"<<endl;
        vest->setHp(health);
        this->vest=(*vest);
    }
    char getName(){
        return name;
    }
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }
    int getAlive(){
        return alive;
    }
    Helmet getHelmet(){
        return helmet;
    }
    Vest getVest(){
        return vest;
    }
};
int main(){
    Player a,b,c;

    Gun akm,awm;
    akm.setAmmo(100);
    akm.setDamage(52);
    akm.setRate(72);

    awm.setAmmo(25);
    awm.setDamage(180);
    awm.setRate(30);

    a.setAlive(true);

    a.setGun(awm);
    a.setVest(2);
    cout<<a.getVest().getLevel()<<endl;
    a.getVest().setHp(10000);
    cout<<a.getVest().getHp()<<endl;
}