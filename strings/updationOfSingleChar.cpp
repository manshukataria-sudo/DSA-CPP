#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str="Manshu";
    // cout<<str<<endl;
    // str[0]='B';
    // cout<<str<<endl;
    int n;
    cout<<"Enter the size of string : ";
    cin>>n;
    char str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    for(int i=0;i<n;i++){
        if(i%2==0) str[i]='a';
    }
    cout<<str<<endl;
    
    
}
