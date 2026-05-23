#include<iostream>
using namespace std;
// int ways(int n){
//     if(n==1 || n==2) return n;
//     return ways(n-1)+ways(n-2);
// }
int ways(int n){
    if(n==1 || n==2) return n;
    if(n==3) return 4;
    return ways(n-1)+ways(n-2)+ways(n-3);
}
int main(){
    int n;
    cout<<"Enter the number of steps : ";
    cin>>n;
    cout<<ways(n);
}