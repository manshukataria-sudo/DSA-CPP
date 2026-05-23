// #include<iostream>
// using namespace std;
// int gcd(int a,int b){
//     int max=1;
//     for(int i=2;i<=min(a,b);i++){
//         if(a%i==0 && b%i==0){
//             max=i;
//         }
//     }
//     return max;

// }
// int main(){
//     int a,b;
//     cout<<"Enter a : ";
//     cin>>a;
//     cout<<"Enter b : ";
//     cin>>b;
//     int x=gcd(a,b);
//     cout<<"GCD of "<<a<<" & "<<b<<" is : "<<x;

// }


#include<iostream>
using namespace std;
int gcd(int a,int b){
    int max=1;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            max=i;
            break;
        }
    }
    return max;
}
int main(){
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    int x=gcd(a,b);
    cout<<"GCD of "<<a<<" & "<<b<<" is : "<<x;

}