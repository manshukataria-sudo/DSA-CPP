#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    fstream myFile;
    // myFile.open("manshu_048.txt",ios::out);
    // if(myFile.is_open()){
    //     myFile<<"Hello Guys !!\n";
    //     myFile<<"My enrollment is 2024BCSE048\n";
    //     myFile<<"I am a B.Tech student at NIT Srinagar\n";
    //     myFile.close();
    // }


    // myFile.open("manshu_048.txt",ios::app);
    // if(myFile.is_open()){
    //     myFile<<"26 me to duniya khatam hai\n";
    //     myFile.close();
    // }
    // cout<<myFile.is_open()<<endl;


    myFile.open("manshu_048.txt",ios::in);
    if(myFile.is_open()){
        string line;
        while(getline(myFile,line)){
            cout<<line<<endl;
        }
        myFile.close();
    }

}