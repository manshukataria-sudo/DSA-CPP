#include<iostream>
#include<stack>
using namespace std;
string solve(string val1,char fun, string val2){
    if(fun=='*' || fun=='/') return '('+val1+')'+fun+val2;
    return val1+fun+val2;
}
string infix(string &str){
    int n=str.size();
    stack<string>val;
    for(int i=n-1;i>=0;i--){
        if(str[i]>=48 && str[i]<=57) val.push(to_string(str[i]-48));
        else{
            string val1=val.top();
            val.pop();
            string val2=val.top();
            val.pop();
            char fun=str[i];
            val.push(solve(val1,fun,val2));
        }
    }
    return val.top();
}
int main(){
    string str="++8/*-93481";                           // 8+(9-3)*4/8+1
    cout<<"Infix of the prefix is : "<<infix(str);
}