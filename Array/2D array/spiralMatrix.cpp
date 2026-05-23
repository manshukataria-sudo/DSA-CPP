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
    int maxr=m-1;
    int maxc=n-1;
    int minr=0;
    int minc=0;
    int count=0;
    cout<<"Spiral form of the matrix is : "<<endl;

    while(minr<maxr && minc<maxc){
        for(int j=minc;j<=maxc && count<(m*n);j++){
            cout<<arr[minr][j]<<" ";
        }
        minr++;
        for(int j=minr;j<=maxr && count<(m*n);j++){
            cout<<arr[j][maxc]<<" ";
        }
        maxc--;
        for(int j=maxc;j>=minc && count<(m*n);j--){
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;
        for(int j=maxr;j>=minr && count<(m*n);j--){
            cout<<arr[j][minc]<<" ";
        }
        minc++;
    }




}