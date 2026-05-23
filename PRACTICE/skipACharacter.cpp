#include<iostream>
using namespace std;
void skipChar(string str,string ans,int i){
    if(i==str.size()){
        cout<<ans<<endl;
        return;
    }
    if(str[i]=='a') skipChar(str,ans,i+1);
    else skipChar(str,ans+str[i],i+1);
}
int main(){
    string str="hello world hi duniya kaise ho saare";
    skipChar(str,"",0);
}