#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;          
    v.push_back(1);      
    cout<<v.size()<<endl;         // size and 
    v.push_back(2);               //capacity is differsent;
    cout<<v.size()<<endl;       
    v.push_back(3);
    cout<<"Capacity is : "<<v.capacity()<<endl;       
    v.push_back(4);
    cout<<v.size()<<endl;       
    v.push_back(100);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    // for(int i=0;i<4;i++){         
    //     cout<<v[i]<<" ";
    // }


}