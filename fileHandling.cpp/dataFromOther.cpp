#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{

    fstream file1, file2;
    file1.open("manshu_048.txt", ios::in);
    file2.open("general_knowledge.txt", ios::in);

    fstream myFile;

    myFile.open("collection.txt", ios::out);
    string line1;
    while (getline(file1, line1))
    {
        myFile << line1 << endl;
    }

    myFile.close();

    myFile.open("collection.txt", ios::app);
    string line2;
    while (getline(file2, line2))
    {
        myFile << line2 << endl;
    }

    myFile.close();

    myFile.open("collection.txt", ios::in);
    string line3;

    while (getline(myFile, line3))
    {
        cout << line3 << endl;
    }

    myFile.close();
}