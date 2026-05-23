#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Troop{
private:
    string name;
    int damage=100;
    int hp=100;
    int speed=100;
public:
    Troop(){}
    Troop(string n,int d,int h,int s):name(n),damage(d),hp(h),speed(s){}

    void setName(string name){Troop::name=name;}
    void setDamage(int damage){this->damage=damage;}
    void setHp(int hp){this->hp=hp;}
    void setSpeed(int speed){this->speed=speed;}

    string getName(){return name;}
    int getDamage(){return damage;}
    int getHp(){return hp;}
    int getSpeed(){return speed;}

    void getMaxDamage(Troop &a){
        if(this->damage>=a.getDamage()) cout<<this->name<<" has more damage"<<endl;
        else cout<<a.name<<" has more damage"<<endl;
    }
};

Troop makeCopy(Troop &copy){
    copy.setName("Archer");
    return copy;
}

int main(){
    Troop a("Barbarian",60,140,10);
    Troop *b=new Troop("Archer",40,120,12);
    cout<<b->getName()<<" "<<b->getDamage()<<endl;
    vector<Troop> troops;
    Troop c("Goblin",80,100,24);
    troops.push_back(c);

    Troop *d;
    d=&a;
    cout<<d->getDamage()<<endl;
    cout<<d->getName()<<endl;
    cout<<d->getHp()<<endl;
    cout<<d->getSpeed()<<endl;
    c.getMaxDamage(*b);

}

