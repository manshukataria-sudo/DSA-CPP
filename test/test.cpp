#include <iostream>
using namespace std;
void skipChar(string str,char skip,string ans,int i){
if(i==str.size()){
    cout<<ans<<endl;
    return;
}
if(str[i]!=skip) skipChar(str,skip,ans+str[i],i+1);
else skipChar(str,skip,ans,i+1);
}

int main() {
	// your code goes here
    string str;
    getline(cin,str);
    char skip;
    cin>>skip;
    string ans="";
    skipChar(str,skip,ans,0);
	return 0;
}