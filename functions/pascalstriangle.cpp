// #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n==0) return 1;
//     return n*fact(n-1);
// }
// int ncr(int n,int r){
//     int c=fact(n)/(fact(n-r)*fact(r));
//     return c;
// }
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int a=n;
//     for(int i=0;i<n;i++){
//         for(int k=1;k<=a-1;k++){
//             cout<<" ";
//         }
//         a--;
//         for(int j=0;j<=i;j++){
//             cout<<ncr(i,j)<<" ";
//         }
//         cout<<endl;

//     }

// }
#include<iostream>                          // optimised pascals triangle
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int a=n;
    for(int i=0;i<n;i++){
        for(int k=1;k<=a-1;k++){
            cout<<" ";
        }
        a--;
         int x=1;
        for(int j=0;j<=i;j++){
            cout<<x<<" ";
            x=x*(i-j)/(j+1);
        }
        cout<<endl;

    }

}