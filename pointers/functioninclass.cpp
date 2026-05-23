// #include<iostream>
// using namespace std;
// class player{
//     public:
//     int health;
//     int score;
//     void showscore(){
//         cout<<"Score is : "<<score<<endl;
//     }
//     void showhealth(){
//         cout<<"Health is : "<<health<<endl;
//     }
// };

// int main(){
//     player a;
//     a.health=100;
//     a.score=2;
//     a.showscore();
//     a.showhealth();


// }


#include<iostream>
using namespace std;
class calculator{
    private:
    int a;
    int b;
    public:
    void add(){
        cout<<a+b<<endl;
    }
    void sub(){
        cout<<a-b<<endl;
    }
};

int main(){
    calculator calci;
    // calci.a=103;
    // calci.b=20;
    calci.add();
    calci.sub();
    


}

