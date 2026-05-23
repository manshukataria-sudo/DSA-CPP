#include<iostream>
using namespace std;
void rec(int min,int n){
    if(min==n) return;
    rec(++min,n);
    cout<<min<<endl;
}
int main(){
    rec(0,10);
    // int x=3;
    // cout<<min()

}