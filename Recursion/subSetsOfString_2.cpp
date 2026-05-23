#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void subSets(string ans,string &str,int i,bool flag){
    if(i==str.size()){
        cout<<ans<<endl;
        return;
    }
    if(i==str.size()-1){
        if(flag==true) subSets(ans+str[i],str,i+1,true);
        subSets(ans,str,i+1,true);
    }
    else if(str[i]==str[i+1]){
        if(flag==true) subSets(ans+str[i],str,i+1,true);
        subSets(ans,str,i+1,false);
    }
    else{
        if(flag==true) subSets(ans+str[i],str,i+1,true);
        subSets(ans,str,i+1,true);
    }
}
int main(){
    string str="aab";
    sort(str.begin(),str.end());
    subSets("",str,0,true);
}