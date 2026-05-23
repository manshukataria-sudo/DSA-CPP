#include<iostream>
using namespace std;
class Gun{
    private:
    int ammo;
    int damage;
    int scope;
    public:
    void setAmmo(int ammo){
        this->ammo=ammo;
    }
    void setDamage(int damage){
        this->damage=damage;
    }
    void setScope(int scope){
        this->scope=scope;
    }
    int getAmmo(){
        return ammo;
    }
    int getDamage(){
        return damage;
    }
    int getScope(){
        return scope;
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
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    Helmet helmet;
    
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

        this->helmet=*helmet;

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
    Gun getGun(){
        return gun;
    }
    void getHelmet(){
        cout<<helmet.getHp()<<endl;
        cout<<helmet.getLevel()<<endl;
    }
};
int main(){

    Player a,b;                     
    a.setAlive(true);
    a.setScore(0);
    a.setHealth(100);
    a.setAge(20);

    Gun akm;
    akm.setAmmo(100);
    akm.setDamage(50);
    akm.setScope(2);

    a.setGun(akm);

    //cout<<a.getGun().getAmmo()<<endl;
    a.setHelmet(3);
    
    Gun awm;
    awm.setAmmo(15);
    awm.setDamage(180);
    awm.setScope(8);

    b.setAge(30);
    b.setAlive(false);
    b.setScore(1090);
    b.setHealth(0);
    b.setGun(awm);

    Gun ump;
    ump.setAmmo(50);
    ump.setDamage(30);
    ump.setScope(1);

    // Player c;
    // c.setGun(ump);

    // cout<<c.getGun().getDamage()<<endl;

    // Gun gun123=a.getGun();
    // cout<<gun123.getDamage()<<endl;
    // cout<<gun123.getScope()<<endl;
    // cout<<gun123.getAmmo()<<endl;

    a.getHelmet();
    b.setHelmet(5);
    b.getHelmet();
     
}