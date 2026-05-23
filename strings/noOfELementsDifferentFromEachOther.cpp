#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    int count=0;
    for(int i=0;i<str.size();i++){
        if(str.size()==1) break;
        if(str.size()==2 && str[0]!=str[1]){
            count=1;
            break;
        }
        if(i==0 && str[0]!=str[1]) count++;
        else if(i==str.size()-1 && str[i]!=str[i-1]) count++;
        else if(str[i]!=str[i-1] && str[i]!= str[i+1]) count++;
    }
    cout<<count<<endl;
} 