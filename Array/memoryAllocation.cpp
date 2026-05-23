#include<iostream>
using namespace std;
int main(){
    int arr[7];//={35,45,23,12,56,77,999};
    cout<<&arr<<endl;
    cout<<arr<<endl;
    for(int i=0;i<7;i++){
        cout<<&arr[i]<<endl;
    }
}