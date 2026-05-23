#include<iostream>
using namespace std;
void pip(int n){
    if(n==0) return;
    cout<<n<<endl;
    pip(n-1);
    cout<<n<<endl;
    pip(n-1);
    cout<<n<<endl;
}

int main(){
    pip(3);
}

