#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    string subString;
    subString=s.substr(2,8);
    cout<<subString<<endl;
    reverse(subString.begin(),subString.end());
    cout<<subString<<endl;
    
} 