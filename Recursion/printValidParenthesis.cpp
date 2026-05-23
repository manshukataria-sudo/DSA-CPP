#include<iostream>
using namespace std;
void validParenthesis(int openB,int closeB,string ans){
    if(openB==0 && closeB==0){
        cout<<ans<<endl;
        return;
    }
    if(ans.size()==0 || closeB-openB==0){
        validParenthesis(openB-1,closeB,ans+"(");
    }
    else if(openB==0){
        validParenthesis(openB,closeB-1,ans+")");
    }
    else{
        validParenthesis(openB-1,closeB,ans+"(");
        validParenthesis(openB,closeB-1,ans+")");
    }
}
int main(){
    int n=2;
    validParenthesis(n,n,"");
    cout<<(int)('0')<<endl;
    string test=to_string(2345);
    cout<<test<<endl;
}