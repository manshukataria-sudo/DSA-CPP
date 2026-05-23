#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of string : ";
    cin>>n;
    char str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    int vowels=0;
    for(int i=0;i<n;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ){
            vowels++;
        }
    }
    cout<<vowels<<endl;
}
