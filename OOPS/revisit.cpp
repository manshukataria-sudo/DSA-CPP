#include<iostream>
using namespace std;
class student{
private:
    char name;
    int std;
    int age;
    int rollno;
public:
    void setName(char name){
        this->name=name;
    }
    void setStd(int std){
        this->std=std;
    }
    void setAge(int age){
        this->age=age;
    }
    void setRollno(int rollno){
        this->rollno=rollno;
    }

    char getName(){
        return name;
    }
    int getStd(){
        return std;
    }
    int getAge(){
        return age;
    }
    int getRollno(){
        return rollno;
    }
};
int sumAscii(student m,student n){
    return (int)m.getName()+(int)n.getName();
}
student elder(student m,student n){
    student c;
    c.setName(max((int)m.getName(),(int)n.getName()));
    c.setAge(max(m.getAge(),n.getAge()));
    c.setStd(max(m.getStd(),n.getStd()));
    c.setRollno(max(m.getRollno(),n.getRollno()));

    return c;
}

int main(){
    student a,b;
    a.setName('A');
    a.setStd(10);
    a.setAge(16);
    a.setRollno(20);

    b.setName('B');
    b.setStd(12);
    b.setAge(18);
    b.setRollno(01);

    // cout<<sumAscii(a,b)<<endl;

    // student d=elder(a,b);

    // cout<<d.getName()<<endl;
    // cout<<d.getStd()<<endl;
    // cout<<d.getAge()<<endl;
    // cout<<d.getRollno()<<endl;


    student *m=new student;
    (*m).setRollno(100);
    (*m).setName('M');
    (*m).setAge(30);
    (*m).setStd(14);

    m->setAge(40);

    cout<<(*m).getRollno()<<endl;
    cout<<(*m).getName()<<endl;
    cout<<m->getAge()<<endl;
    cout<<(*m).getStd()<<endl;








}