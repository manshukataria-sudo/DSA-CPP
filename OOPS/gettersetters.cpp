#include<iostream>
using namespace std;
class player{
    private:
    int health;
    int score;
    public:

    // void showHealth(){
    //     cout<<"Health is : "<<health<<endl;
    // }
    // void showScore(){
    //     cout<<"Score is : "<<score<<endl;
    // }

            // setters
    void hea(int h){
        cout<<"HEA function is called"<<endl;
        health=h;
    }
    void sco(int s){
        cout<<"SCO function is called"<<endl;
        score=s;
    }
            // getters
    int showHealth(){
        return health;
    }
    int showScore(){
        return score;
    }

};
int main(){
    player a;
    a.hea(100);
    a.sco(120);
    cout<<a.showHealth()<<endl;
    cout<<a.showScore()<<endl;
    

}