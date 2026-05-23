// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter the size of 1st array : ";
//     cin>>a;
//     cout<<"Enter the elements of array : ";
//     vector <int> x(a);
//     for(int i=0;i<a;i++){
//         cin>>x[i];
//     }
//     cout<<"Enter the size of 2nd array : ";
//     cin>>b;
//     cout<<"Enter the elements of array : ";
//     vector <int> y(b);
//     for(int i=0;i<b;i++){
//         cin>>y[i];
//     }
//     vector <int> z(a+b);
//     int i=0,j=0,k=0;
//     while(k<(a+b)){
//         if(x[i]<y[j] && i<a && j<b){
//             z[k]=x[i];
//             i++;
//             k++;
//         }
//         else if(y[j]<x[i] && i<a && j<b){
//             z[k]=y[j];
//             j++;
//             k++;
//         }
//         else{
//             if(i<a){
//                 z[k]=x[i];
//                 k++;
//                 i++;
//             }
//             else{
//                 z[k]=y[j];
//                 k++;
//                 j++;
//             }
//         }
//     }
//     for(int i=0;i<a+b;i++){
//         cout<<z[i]<<" ";
//     }

// }

#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int> &x,vector<int> &y){
    vector<int>z(x.size()+y.size());
    int i=0,j=0,k=0;
    while(k<(x.size()+y.size())){
        if(x[i]<y[j] && i<x.size() && j<y.size()){
            z[k]=x[i];
            i++;
            k++;
        }
        else if(y[j]<x[i] && i<x.size() && j<y.size()){
            z[k]=y[j];
            j++;
            k++;
        }
        else{
            if(i<x.size()){
                z[k]=x[i];
                k++;
                i++;
            }
            else{
                z[k]=y[j];
                k++;
                j++;
            }
        }
    }
    return z;
}
int main(){
    int a,b;
    cout<<"Enter the size of 1st array : ";
    cin>>a;
    cout<<"Enter the elements of array : ";
    vector <int> x(a);
    for(int i=0;i<a;i++){
        cin>>x[i];
    }
    cout<<"Enter the size of 2nd array : ";
    cin>>b;
    cout<<"Enter the elements of array : ";
    vector <int> y(b);
    for(int i=0;i<b;i++){
        cin>>y[i];
    }
    vector <int> z=merge(x,y);
    for(int i=0;i<a+b;i++){
        cout<<z[i]<<" ";
    }

}