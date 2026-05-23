#include<iostream>
using namespace std;
void duplicate(int a[],int n){
    bool flag;
    int i=0;
    while(i<n){
        int j=i+1;
        while(j<n){
            if(a[j]==a[i]) flag=true;
            j++;
        }
        i++;
    }
    if(flag==true) cout<<"DUPLICATE FOUND OF "<<a[i]<<endl;
    else if(flag==false) cout<<"ERROR 404!! NO DUPLICATE FOUND"<<endl;
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    duplicate(a,n);


}