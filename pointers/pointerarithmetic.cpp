#include<iostream>
using namespace std;
int main(){
    int x=5;
    int* ptr=&x;
    cout<<ptr<<endl;
    ptr=ptr+6;
    cout<<ptr<<endl;


}

// #include<iostream>
// using namespace std;
// int main(){
//     int x=4;
//     int* ptr=&x;
//     cout<<*ptr<<endl;
//     ptr++;
//     cout<<*ptr<<endl;


// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x=4;
//     int* ptr=&x;
//     cout<<*ptr<<endl;
//     (*ptr)++;
//     cout<<*ptr<<endl;


// }


// #include<iostream>
// using namespace std;
// int main(){
//     int x=4;
//     int* ptr=&x;
//     cout<<*ptr<<endl;
//     *ptr=*ptr+1;
//     cout<<*ptr<<endl;


// }