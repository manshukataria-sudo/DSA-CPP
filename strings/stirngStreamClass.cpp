#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    // string str="hi hello baad me aprty karenge sath me";
    // int words=0;
    // for(int i=0;i<str.size();i++){
    //     if(str[i]==' ' && str[i-1]!=' ') words++;
    //     if(str[str.size()-1]!=' ') words++;
    // }
    // cout<<words<<endl;

    string str="Stars are  far  away";
    stringstream ss(str);
    string temp;

    while(ss>>temp){
        cout<<temp<<endl;
    }

    
}