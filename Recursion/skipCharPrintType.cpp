#include<iostream>
#include<string>
using namespace std;
void skipChar(int i,string str,string skipped,char skip){
    if(i==str.size()-1){
        cout<<skipped<<endl;
        return;
    }
    if(str[i]!=skip) skipChar(i+1,str,skipped+str[i],skip);
    else skipChar(i+1,str,skipped,skip);
}

int main(){
    string str="";
    skipChar(0,str,"",'a');
}