#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the "<<n<<" elements of array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int nodd=0,neven=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0) neven++;
        else nodd++;
    }
    cout<<"Number of even elements are : "<<neven<<endl;
    cout<<"Number of odd elements are : "<<nodd<<endl;
    
}