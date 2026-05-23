#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string of even length : ";
    getline(cin,s);
    cout<<s.substr(s.size()/2)<<endl;
    
} 