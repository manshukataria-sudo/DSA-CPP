#include<iostream>
using namespace std;
void fact(int n){
    int p=1;
    for(int i=1;i<=n;i++){
        p=p*i;
        cout<<"Factorial of "<<i<<" is : "<< p<<endl;
    }

}
int main (){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    fact(n);
}
