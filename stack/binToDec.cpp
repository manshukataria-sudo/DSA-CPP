#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int decToBin(int dec){
    int sum=0;
    int i=1;
    int rem;
    while(dec!=0){
        rem=dec%2;
        sum+=(rem*i);
        i*=10;
        dec/=2;
    }
    return sum;
}

int noOfDigits(int n){
    int i=0;
    while(n!=0){
        i++;
        n/=10;
    }
    return i;
}

int main(){
    cout<<decToBin(514)<<endl;
    cout<<noOfDigits(1000)<<endl;
}