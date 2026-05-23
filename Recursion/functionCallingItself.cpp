#include<iostream>
using namespace std;
void fun(int count){
    if(count==0) return;
    fun(count-1);
    cout<<"hello World"<<endl;
}
int main(){
    fun(10);
}
