// #include<iostream>
// #include<vector>
// using namespace std;

// // two pass array
// void display(vector<int> &v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }
// void sort(vector<int> &v){
//     int no0=0;
//     int no1=0;
//     int no2=0;
//     for(int i=0;i<v.size();i++){
//         if(v[i]==0) no0++;
//         if(v[i]==1) no1++;
//         if(v[i]==2) no2++;
//     }
//     for(int i=0;i<v.size();i++){
//         if(i<no0) v[i]=0;
//         else if(i<(no0+no1)) v[i]=1;
//         else v[i]=2; 
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     vector<int> v(n);
//     cout<<"ENter the array of 0's,1's and 2's : ";
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     sort(v);
//     display(v);

// }


#include<iostream>
#include<vector>
using namespace std;

// single pass array    3 pointer solution also called Dutch flag algorithm
// void display(vector<int> &v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }
// void sort(vector<int> &v){
//     int low=0;
//     int mid=0;
//     int high=v.size()-1;
//     while(mid<=high){
//         if(v[mid]==0) {
//             v[low]=v[low]+v[mid];
//             v[mid]=v[low]-v[mid];
//             v[low]=v[low]-v[mid];
//             mid++; low++;
//         }
//         if(mid>high) {break;
//         }
//         if(v[mid]==2){
//             int temp=v[mid];
//             v[mid]=v[high];
//             v[high]=temp;
//             high--;
//         }
//         if(v[mid]==1) {mid++;
//         }
//         if(mid>high) {break;
//         }
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     vector<int> v(n);
//     cout<<"Enter the array of 0's,1's and 2's : ";
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     sort(v);
//     display(v);

// }


void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void sort(vector<int> &v){
    int low=0;
    int mid=0;
    int high=v.size()-1;
    while(mid<=high){
        if(v[mid]==2){
            int temp=v[mid];
            v[mid]=v[high];
            v[high]=temp;
            high--;
        }
        else if(v[mid]==0) {
            v[low]=v[low]+v[mid];
            v[mid]=v[low]-v[mid];
            v[low]=v[low]-v[mid];
            mid++; low++;
        }
        else {mid++;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the array of 0's,1's and 2's : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v);
    display(v);

}