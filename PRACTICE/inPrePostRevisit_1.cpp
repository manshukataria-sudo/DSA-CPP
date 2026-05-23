// #include<iostream>
// #include<stack>
// #include<string>
// using namespace std;
// int prior(char op){
//     if(op=='+' || op=='-') return 1;
//     return 2;
// }
// int solve(int val1,char fun,int val2){
//     if(fun=='+') return val1+val2;
//     else if(fun=='-') return val1-val2;
//     else if(fun=='*') return val1*val2;
//     return val1/val2;
// }
// int solveInfix(string &str){
//     int n=str.size();
//     stack<int>val;
//     stack<char>op;
//     for(int i=0;i<n;i++){
//         if(str[i]>=48 && str[i]<=57) val.push(str[i]-48);
//         else if(str[i]==')'){
//             while(op.top()!='('){
//                 int val2=val.top();
//                 val.pop();
//                 int val1=val.top();
//                 val.pop();
//                 char fun=op.top();
//                 op.pop();
//                 val.push(solve(val1,fun,val2));
//             }
//             op.pop();
//         }
//         else if(op.size()==0 || op.top()=='(' || prior(str[i])>op.top()) op.push(str[i]);
//         else{
//             while(op.size()>0 && prior(op.top())>=prior(str[i])){
//                 int val2=val.top();
//                 val.pop();
//                 int val1=val.top();
//                 val.pop();
//                 char fun=op.top();
//                 op.pop();
//                 val.push(solve(val1,fun,val2));
//             }
//             op.push(str[i]);
//         }
//     }
//     while(op.size()>0){
//         int val2=val.top();
//         val.pop();
//         int val1=val.top();
//         val.pop();
//         char fun=op.top();
//         op.pop();
//         val.push(solve(val1,fun,val2));
//     }
//     return val.top();
// }
// int main(){
//     string str="2+(6-2)*4/8-1";
//     cout<<solveInfix(str)<<endl;
// }



// #include<iostream>
// #include<stack>
// #include<string>
// using namespace std;
// int prior(char op){
//     if(op=='+' || op=='-') return 1;
//     return 2;
// }
// string solve(string val1,char fun,string val2){
//     return val1+val2+fun;
// }
// string prefix(string &str){
//     int n=str.size();
//     stack<string>val;
//     stack<char>op;
//     for(int i=0;i<n;i++){
//         if(str[i]>=48 && str[i]<=57) val.push(to_string(str[i]-48));
//         else if(str[i]==')'){
//             while(op.top()!='('){
//                 string val2=val.top();
//                 val.pop();
//                 string val1=val.top();
//                 val.pop();
//                 char fun=op.top();
//                 op.pop();
//                 val.push(solve(val1,fun,val2));
//             }
//             op.pop();
//         }
//         else if(op.size()==0 || op.top()=='(' || prior(str[i])>op.top()) op.push(str[i]);
//         else{
//             while(op.size()>0 && prior(op.top())>=prior(str[i])){
//                 string val2=val.top();
//                 val.pop();
//                 string val1=val.top();
//                 val.pop();
//                 char fun=op.top();
//                 op.pop();
//                 val.push(solve(val1,fun,val2));
//             }
//             op.push(str[i]);
//         }
//     }
//     while(op.size()>0){
//         string val2=val.top();
//         val.pop();
//         string val1=val.top();
//         val.pop();
//         char fun=op.top();
//         op.pop();
//         val.push(solve(val1,fun,val2));
//     }
//     return val.top();
// }
// int main(){
//     string str="2+(6-2)*4/8-1";              // 262-4*8/+1-    postfix
//     cout<<prefix(str)<<endl;
// }

// #include<iostream>
// #include<stack>
// using namespace std;
// int solve(int val1,int val2,char fun){
//     if(fun=='+') return val1+val2;
//     else if(fun=='-') return val1-val2;
//     else if(fun=='*') return val1*val2;
//     return val1/val2;
// }
// int solvePre(string &str){
//     int n=str.size();
//     stack<int>val;
//     for(int i=0;i<n;i++){
//         if(str[i]>=48 && str[i]<=57) val.push(str[i]-48);
//         else{
//             int val2=val.top();
//             val.pop();
//             int val1=val.top();
//             val.pop();
//             char fun=str[i];
//             val.push(solve(val1,val2,fun));
//         }
//     }
//     return val.top();
// }
// int main(){
//     string str="262-4*8/+1-";
//     cout<<solvePre(str)<<endl;

// }

#include<iostream>
#include<stack>
#include<string>
using namespace std;                                        // 262-4*8/+1-
string postOf(string &str){
    int n=str.size();
    stack<string>val;
    stack<char>op;
    for(int i=n-1;i>=0;i--){
        if(str[i]>=48 && str[i]<=57) val.push(to_string(str[i]-48));
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
    string str="-+2/*-62481";
    cout<<postOf(str)<<endl;
    
}