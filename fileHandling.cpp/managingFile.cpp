#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){

    fstream myFile;
    myFile.open("general_knowledge.txt",ios::out);
    if(myFile.is_open()){
        myFile<<"Sun is a star\n";
        myFile<<"Moon is 3,84,000km away\n";
        myFile<<"Sun is 15,00,00,000km away\n";
        myFile.close();
    }

    myFile.open("general_knowledge.txt",ios::app);
    if(myFile.is_open()){
        myFile<<"Coding was invented by Ada Lovelace\n";
        myFile.close();
    }

    myFile.open("general_knowledge.txt",ios::in);
    if(myFile.is_open()){
        string line;
        while(getline(myFile,line)){
            cout<<line<<endl;
        }
        myFile.close();
    }
}
    
