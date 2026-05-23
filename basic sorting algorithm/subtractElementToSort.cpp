#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the "<<n<<" elements of array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    float kmin=INT_MIN,kmax=INT_MAX;
    int i=1;
    bool flag=0;
    while(i<n){
        if(arr[i-1]-arr[i]>=0)kmin=max(kmin,(float)(arr[i-1]+arr[i])/2);
        if(arr[i-1]-arr[i]<0){kmax=min(kmax,(float)(arr[i-1]+arr[i])/2);}
        if(kmin>kmax) flag=1;break;
        i++;
    }
    if(kmin>(int)(kmin) && kmax>kmin)cout<<"KMIN is : "<<(int)(kmin)+1<<endl;
    if(kmin==(int)(kmin) && kmax>kmin)cout<<"KMIN is : "<<(int)(kmin)<<endl;
    if(kmax>kmin)cout<<"KMAX is : "<<(int)(kmax)<<endl;
    if(kmax<kmin) cout<<"-1"<<endl;

}