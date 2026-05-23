#include<iostream>
#include<vector>
using namespace std;
vector <int> revPart(vector <int> &b,int pivot){
    for(int i=pivot+1,j=b.size()-1;i<j;i++,j--){
        int temp=b[i];
        b[i]=b[j];
        b[j]=temp;
    }
    return b;
}
vector<int> nextPermutation(vector <int> &b){
    int pivot=-1;
    int secSmallest=INT_MAX;
    int secSmallestIdx=-1;
    for(int i=b.size()-2;i>=0;i--){
        if(b[i]<b[i+1]){
            pivot=i;
            break;
        }
    }
    vector <int> c=revPart(b,pivot); 
    for(int i=pivot+1;i<b.size();i++){
        if(b[i]<secSmallest){
            secSmallestIdx=i;
        }
    }
    if(pivot==-1){
        return c;
    }
    else {
        int temp=c[pivot];
        c[pivot]=c[secSmallestIdx];
        c[secSmallestIdx]=temp;
        return c;
    }
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int> a(n);
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector <int> b=nextPermutation(a);
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }

}