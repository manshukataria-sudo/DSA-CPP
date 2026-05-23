#include<iostream>
#include<string>
using namespace std;
void solve(int n,char s,char h,char d){
    if(n==0) return;
    solve(n-1,s,d,h);
    cout<<s<<" -> "<<d<<endl;
    solve(n-1,h,s,d);
}

// L = left most tower
// M = Middle tower
// R = Right most tower

int main(){
    int n;
    cout<<"Enter the number of disks : ";
    cin>>n;
    solve(n,'L','M','R');
}

