#include<iostream>
using namespace std;
void isPalin(string &str,string ans,int i){
    if(i<0){
        if(ans==str){
            cout<<"Palindrome"<<endl;
        }
        else{
            cout<<"Not Palindrome"<<endl;
        }
        return;
    }
    ans.push_back(str[i]);
    isPalin(str,ans,i-1);
}
bool isPalin2(string &str,int i,int j){
    if(str[i]!=str[j]){
        return false;
    }
    if(i==j){
        return true;
    }
    return isPalin2(str,i+1,j-1);
}
int main(){
    string str="racecar";
    isPalin(str,"",str.size()-1);
    cout<<isPalin2(str,0,str.size()-1)<<endl;
    for(int i=0,j=str.size()-1;i<j;i++,j--){
        if(str[i]!=str[j]){
            cout<<"Not Palindrome"<<endl;
            break;
        }
    }
}