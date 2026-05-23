#include<iostream>
#include<string>
using namespace std;
void printPerm(string str,string ans){
    if(str.size()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<str.size();i++){
        printPerm(str.substr(0,i)+str.substr(i+1),ans+str[i]);
    }
}
int main(){
    string str="123";
    printPerm(str,"");
    // 123
    // 132
    // 213
    // 231
    // 312
    // 321
}