// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter 1st number : ";
//     cin>>a;
//     cout<<"Enter 2nd number : ";
//     cin>>b;
//     int* x=&a;
//     int* y=&b;

//     cout<<*x+*y;

// }

#include<iostream>
using namespace std;
int main(){
    
    int a,b;
    int* x=&a;
    int* y=&b;

    cout<<"Enter 1st number : ";
    cin>>*x;
    cout<<"Enter 2nd number : ";
    cin>>*y;
    
    cout<<*x+*y;

}