#include<iostream>
#include<stack>
using namespace std;
string toPrefix(string &str){
    int n=str.size();
    stack<string> val;
    for(int i=n-1;i>=0;i--){
        if(str[i]>=48 && str[i]<=57){
            val.push(to_string(str[i]-48));
        }
        else{
            string val1=val.top();
            val.pop();
            string val2=val.top();
            val.pop();
            val.push(val1+val2+str[i]);
        }
    }
    return val.top(); 
}
int main(){
    string str="++8/*-93481";
    cout<<"Postfix of the infix is : "<<toPrefix(str);
}
