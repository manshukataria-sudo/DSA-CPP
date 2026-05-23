// #include<iostream>
// #include<vector>
// using namespace std;
// void sort(vector<int> &v){
//     int noo=0;
//     int noz=0;
//     for(int i=0;i<v.size();i++){
//         if(v[i]==0) noz++;
//         if(v[i]==1) noo++;
//     }
//     for(int i=0;i<v.size();i++){ 
//         if(i<noz) v[i]=0;
//         else v[i]=1;
//     }
// }
// void display(vector<int> &v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     vector<int> v(n);
//     cout<<"Enter the array of 0's and 1's : ";
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     sort(v);
//     display(v);

// }


#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int> &v){
    int m=0;
    int n=v.size()-1;
    // for(int i=m,j=n;i<j;i++,j--){
    //     if(v[m]==0 && v[n]==0){
    //         m++;
    //     }
    //     if(v[m]==1 && v[n]==1){
    //         n--;
    //     }
    //     if(v[m]==0 && v[n]==1){
    //         m++;
    //         n--;
    //     }
    //     if(v[m]==1 && v[n]==0){
    //         v[m]=v[m]+v[n];
    //         v[n]=v[m]-v[n];
    //         v[m]=v[m]-v[n];
    //     }
    // }
    
    while(m<n && n-m!=1){
        if(v[m]==0) m++;
        if(v[n]==1) n--;
        if(v[m]==1 && v[n]==0){
            v[m]=v[m]+v[n];
            v[n]=v[m]-v[n];
            v[m]=v[m]-v[n];
            m++;
            n--;
        }
    }
}   
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the array of 0's and 1's : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v);
    display(v);

}