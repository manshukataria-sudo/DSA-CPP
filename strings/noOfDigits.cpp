#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    string str=to_string(a);
    cout<<"Number of digits are : "<<str.size()<<endl;
    
} 