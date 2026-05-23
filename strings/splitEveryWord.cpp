#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    stringstream ss(str);
    string temp;

    while(ss>>temp){
        cout<<temp<<endl;
    }

    
}