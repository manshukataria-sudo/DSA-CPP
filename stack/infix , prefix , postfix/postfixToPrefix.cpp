#include<iostream>
#include<stack>
using namespace std;
string solve(string val1,string val2,char op){
    return op+val1+val2;
}
string postToPre(string &str){
    int n=str.size();
    stack<string>val;
    for(int i=0;i<n;i++){
        if(str[i]>=48 && str[i]<=57) val.push(to_string(str[i]-48));
        else {
            string val2=val.top();
            val.pop();
            string val1=val.top();
            val.pop();
            char op=str[i];
            val.push(solve(val1,val2,op));
        }
    }
    return val.top();
}
int main(){
    string str="893-4*8/+1+";                   //  ++8/*-93481
    cout<<"Prefix of the postfix is : "<<postToPre(str);
}