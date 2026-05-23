#include<iostream>
using namespace std;
void fl(int*a,int*b,int*c){
    (*c)=(*a)%10;
    while(*a!=0){
        if(*a/10==0){
            *b=*a%10;
        }
        *a=*a/10;
    }
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int x=0,y=0;
    fl(&n,&x,&y);
    cout<<"First digit is : "<<x<<endl;
    cout<<"Last digit is : "<<y<<endl;


}