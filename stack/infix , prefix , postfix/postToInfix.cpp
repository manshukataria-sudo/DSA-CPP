#include<iostream>
#include<stack>
#include<string>
using namespace std;
string solve(string val1,string val2,char fun){
    if(fun=='*' || fun=='/') return '('+val1+')'+fun+val2;
    return val1+fun+val2;
}
string postToInfix(string &str){
    int n=str.size();
    stack<string> val;
    for(int i=0;i<n;i++){
        if(str[i]>=48 && str[i]<=57){
            val.push(to_string(str[i]-48));
        }
        else{
            string val2=val.top();
            val.pop();
            string val1=val.top();
            val.pop();
            char fun=str[i];
            val.push(solve(val1,val2,fun));
        }
    }
    return val.top();
}
int main(){
    string str="893-4*8/+1+";
    cout<<"Infix of the postfix is : "<<postToInfix(str);
}