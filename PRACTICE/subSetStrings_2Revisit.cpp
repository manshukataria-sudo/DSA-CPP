#include<iostream>
#include<algorithm>
using namespace std;
void subSet(string &str,string ans,int i,bool flag){
    if(i==str.size()){
        cout<<ans<<endl;
        return;
    }
    if(i==str.size()-1){
        if(flag==true) subSet(str,ans,i+1,true);
        subSet(str,ans+str[i],i+1,true);
    }
    else if(str[i]==str[i+1]){
        if(flag==true) subSet(str,ans,i+1,true);
        subSet(str,ans+str[i],i+1,false);
    }
    else{
        if(flag==true) subSet(str,ans,i+1,true);
        subSet(str,ans+str[i],i+1,true);
    }
}
int main(){
    string str="aabbcc";
    subSet(str,"",0,true);
}