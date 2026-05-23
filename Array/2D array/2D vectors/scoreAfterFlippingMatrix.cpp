#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of rows : ";
    cin>>m;
    cout<<"Enter the number of columns : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
}