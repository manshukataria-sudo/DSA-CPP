#include<iostream>
#include<stack>
using namespace std;
int solve(int val1,int val2,char fun){
    if(fun=='+') return val1+val2;
    else if(fun=='-') return val1-val2;
    else if(fun=='*') return val1*val2;
    return val1/val2;
}
int solvePrefix(string &str){
    int n=str.size();
    stack<int>val;
    for(int i=n-1;i>=0;i--){
        if(str[i]>=48 && str[i]<=57) val.push(str[i]-48);
        else{
            int val1=val.top();
            val.pop();
            int val2=val.top();
            val.pop();
            char op=str[i];
            val.push(solve(val1,val2,op));
        }
    }
    return val.top();
}
int main(){
    string str="++8/*-93481";               //  893-4*8/+1+
    cout<<"Solution is : "<<solvePrefix(str);
}
