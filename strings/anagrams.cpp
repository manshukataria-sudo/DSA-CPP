#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string a,b;
    cout<<"Enter the 1st string : ";
    getline(cin,a);
    cout<<"Enter the 2nd string : ";
    getline(cin,b);
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a==b) cout<<"Anogram"<<endl;
    else cout<<"Not Anogram"<<endl;

} 