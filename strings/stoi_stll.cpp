#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int a=123456;
    string str=to_string(a);
    cout<<str<<endl;

    string s="123456";
    int x=stoi(s);
    cout<<x+1<<endl;

    string pq="12345678910111";
    
    cout<<stoll(pq)<<endl;

}