#include<iostream>
using namespace std;
class Student{
    private:
    int dscore;
    char name;
    int std;
    int rollno;
    int age;
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
    void setDscore(int rollno){
        if(rollno>10) this->dscore=100;
        else if(rollno>20) this->dscore=90;
        else if(rollno>50) this->dscore=80;
        else cout<<"INVALID ROLL NUMBER"<<endl;
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
    int getDscore(){
        return dscore;
    }

};
class Schoolmate{
private:
    class Teacher{
        int dscore;
        char tier;
        char sub;
        int sal;
        int exp;
    public:
    void setTier(char tier){
        this->tier=tier;
    }
    void setSub(char sub){
        this->sub=sub;
    }
    void setSal(int sal){
        this->sal=sal;
    }
    void setExp(int exp){
        this->exp=exp;
    }
    void setDscore(char tier){
        if(tier=='A') this->dscore=100;
        else if(tier=='B') this->dscore=95;
        else if(tier=='C') this->dscore=90;
        else cout<<"INVALID TIER"<<endl;

        this->dscore=dscore;
    }
    char getTier(){
        return tier;
    }
    char getSub(){
        return sub;
    }
    int getSal(){
        return sal;
    }
    int getExp(){
        return exp;
    }
    int getDscore(){
        return dscore;
    }
    
    };
    class Helper{
    private:
        int dscore;
        char tier;
        int sal;
        int yearwork;
    public:
    void setTier(char tier){
        this->tier=tier;
    }
    void setSal(int sal){
        this->sal=sal;
    }
    void setYearwork(int yearwork){
        this->yearwork=yearwork;
    }
    void setDscore(char tier){
        if(tier=='A') this->dscore=100;
        else if(tier=='B') this->dscore=95;
        else if(tier=='C') this->dscore=90;
        else cout<<"INVALID TIER"<<endl;

        this->dscore=dscore;
    }
    char getTier(){
        return tier;
    }
    int getSal(){
        return sal;
    }
    int getYearwork(){
        return yearwork;
    }
    int getDscore(){
        return dscore;
    }
    

    };
    bool disabled;
    Student student;
    Teacher teacher;
    Helper helper;

    void setDisabled(bool disabled){
        this-> disabled=disabled;
    }
    void setStudent(Student student){
        this->student=student;
    }
    void setTeacher(Teacher teacher){
        this->teacher=teacher;
    }
    void setHelper(Helper helper){
        this->helper=helper;
    }

    
};
int main(){


}