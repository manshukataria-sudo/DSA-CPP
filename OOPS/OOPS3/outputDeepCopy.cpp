#include<iostream>
using namespace std;
class Student{
    public:
    int rollno;
    int age;
    int marks;
    
};
char calcGrade(Student s){
        char grade;
        if(s.marks>90) grade='A';
        else if(s.marks>80) grade='B';
        else if(s.marks>70) grade='C';
        else if(s.marks>60) grade='D';
        else if(s.marks>50) grade='E';
        else grade='F';
        return grade;
    }
int main(){
    Student s1;
    Student s2=s1;              // deep copy bani hai    // "=" iss operator ki operator overloading hui hai
    s1.rollno=101;
    s1.age=20;
    s1.marks=91;
    cout<<s1.rollno<<" "<<s1.age<<endl;
    cout<<"Grade is : "<<calcGrade(s1);

}


// #include<iostream>
// using namespace std;
// class Student{
//     public:
//     int rollno;
//     static int getRollNo(){
//         return rollno;
//     }
// };
// int main(){
//     Student s;
//     s.rollno=100;
//     cout<<s.rollno<<endl;

// }

// #include<iostream>
// using namespace std;
// class Student{
//     public:
//     string name;
//     string author;
//     int callno;
//     void display(){
//         cout<<name<<" "<<author<<" "<<callno<<endl;
//     }
// };
// int main(){

//     Student b1={"Let Us C","YPK",101};
//     b1.display();

// }