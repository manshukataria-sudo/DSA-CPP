#include<iostream>
using namespace std;
int greatest(int a,int b,int c){
    if(a>b){
        if(a>c) return a;
        else return c;
    }
    else {
        if(b>c) return b;
        else return c;
    }
return 0;
}
int main(){
    int a,b,c;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b :  ";
    cin>>b;
    cout<<"Enter c :  ";
    cin>>c;
    cout<<"Greatest of the above three is : "<<greatest(a,b,c);
    
}