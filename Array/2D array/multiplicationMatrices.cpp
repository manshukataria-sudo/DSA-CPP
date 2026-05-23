#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Enter the rows of matrix 1 : ";
    cin>>a;
    cout<<"Enter the columns of matrix 1 : ";
    cin>>b;
    int arr[a][b];
    cout<<"Enter the 1st matrix : "<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the rows of matrix 2 : ";
    cin>>c;
    cout<<"Enter the columns of matrix 2 : ";
    cin>>d;
    int brr[c][d];
    cout<<"Enter the 2nd matrix : "<<endl;
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            cin>>brr[i][j];
        }
    }
    cout<<endl;
    if(b!=c) cout<<"INVALID MULTIPLICATION"<<endl;
    else {
        int crr[a][d];
        for(int i=0;i<a;i++){
            for(int j=0;j<d;j++){
                int sum=0;
                for(int k=0;k<b;k++){
                    sum+=(arr[i][k]*brr[k][j]);
                }
                crr[i][j]=sum;
            }
        }
        for(int i=0;i<a;i++){
            for(int j=0;j<d;j++){
                cout<<crr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}