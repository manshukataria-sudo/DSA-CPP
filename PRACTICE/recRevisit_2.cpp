#include<iostream>
using namespace std;
// int pow(int a,int b){
//     if(b==0) return 1;
//     return a*pow(a,b-1);
// }
int pow(int a,int b){
    if(b==0) return 1;
    if(b==1) return a;
    int ans=pow(a,b/2);
    ans*=ans;
    if(b%2!=0) ans*=a;
    return ans;
}

void steps(int n,string way){
    if(n<0) return;
    if(n==0){
        cout<<way<<endl;
        return;
    }
    steps(n-1,way+"1");
    steps(n-2,way+"2");
}

void mazeSol(int rows,int columns,string way){
    if(rows<1 || columns<1) return;
    if(rows==1 && columns==1){
        cout<<way<<endl;
        return;
    }
    mazeSol(rows-1,columns,way+"D");
    mazeSol(rows,columns-1,way+"R");
}
int main(){
    // cout<<pow(3,5)<<endl;
    // steps(5,"");
    mazeSol(3,4,"");

}