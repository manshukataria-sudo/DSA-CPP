// #include<iostream>
// #include<cmath>
// using namespace std;
// void sq(int n){
//     for(int i=1;i<=n;i++){
//         cout<<"Square of "<<i<<" is : "<<pow(i,2)<<endl;
//     }
//     return;
// }
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     sq(n);
//     cout<<"Hi";

// }

// #include<iostream>
// using namespace std;
// float area(int n){
//     return 3.1415*n*n;
// }
// int main(){
//     int n;
//     cout<<"Enter the radius of circle : ";
//     cin>>n;
    
//     cout<<"Area of the circle is : "<<area(n);

// }

// #include<iostream>
// using namespace std;
// void odd(int a,int b){
//     for(int i=min(a,b)+1;i<max(a,b);i++){
//         if(i%2!=0) cout<<i<<"  ";
//     }
//     return ;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     odd(a,b);

// }


// #include<iostream>
// #include<cmath>
// using namespace std;
// int count(int n){
//     int m=0;
//     while(n!=0){
//         n=n/10;
//         m++;
//     }
//     return m;
// }
// void count(int n){
//     cout<<"HI";
//     return;
//         }
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int x=count(n);
//     cout<<n<<" has "<<x<<" digits "<<endl;
//     cout<<"Square of "<<n<<" is : "<<pow(n,2)<<endl;
    
// }




#include<iostream>
#include<cmath>
using namespace std;

int fun(int=0,int=0);

int main(){
    cout<<fun(5);
    return 0;
}

int fun(int x,int y){
    return (x+y);
}