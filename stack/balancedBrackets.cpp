#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string of parenthesis only : ";
    getline(cin,str);
    stack<char>st;
    bool flag=true;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='(') st.push(str[i]);
        else if(str[i]==')' && st.size()==0){
            flag=false;
            break;
        }
        else st.pop();
    }
    if(flag==false) cout<<"Unbalanced brackets"<<endl;
    else cout<<"Balanced brackets"<<endl;
}