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
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    cout<<"Sum of elements of the given array is : "<<sum;
}