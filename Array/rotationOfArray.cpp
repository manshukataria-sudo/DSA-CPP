// #include<iostream>
// #include<vector>
// using namespace std;
// void rot(vector<int> &v,int m){
//     for(int i=0;i<=m-1;i++){
//         for(int j=1;j<v.size();j++){
//             v[0]=v[0]+v[j];
//             v[j]=v[0]-v[j];
//             v[0]=v[0]-v[j];
//         }
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
//     cout<<"Enter the elements of array : ";
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     int x;
//     cout<<"Enter the number of rotations : ";
//     cin>>x;
//     int m=x%v.size();
//     rot(v,m);
//     display(v);

// }



//  modified rotation

#include<iostream>
#include<vector>
using namespace std;
void rot(vector<int> &v,int i,int j){
    for(i,j;i<j;i++,j--){
        v[i]=v[i]+v[j];
        v[j]=v[i]-v[j];
        v[i]=v[i]-v[j];
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
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int x;
    cout<<"Enter the number of rotations : ";
    cin>>x;
    int m=x%v.size();
    rot(v,0,n-x-1);
    rot(v,n-x,n-1);
    rot(v,0,n-1);

    display(v);

}