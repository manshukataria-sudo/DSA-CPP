#include<iostream>
#include<stack>
using namespace std;
int solve(int val1,int val2,char fun){
    if(fun=='+') return val1+val2;
    else if(fun=='-') return val1-val2;
    else if(fun=='*') return val1*val2;
    return val1/val2;
}
int solvePostFix(string &str){
    int n=str.size();
    stack<int>val;
    for(int i=0;i<n;i++){
        if(str[i]>=48 && str[i]<=57) val.push(str[i]-48);
        else{
            int val2=val.top();
            val.pop();
            int val1=val.top();
            val.pop();
            char fun=str[i];
            val.push(solve(val1,val2,fun));
        }
    }
    return val.top();
}
int main(){
    string str="893-4*8/+1+";
    cout<<"Solution of the postfix is : "<<solvePostFix(str);
}