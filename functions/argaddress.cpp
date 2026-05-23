#include<iostream>
using namespace std;
void fun(int x,int y){
    cout<<"address of fun x and y is : "<<endl<<&x<<endl<<&y;
}
int main (){
    int x=2;
    int y=3;
    cout<<"address of main x and y is : "<<endl<<&x<<endl<<&y<<endl;
    fun(x,y);
}