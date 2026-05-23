#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;          
    v.push_back(1);      
    v.push_back(2);         
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);      
    v.push_back(2);         
    v.push_back(3);
    v.push_back(4);
        
    // for(int i=0;i<v.size();i++){         
    //     cout<<v[i]<<" ";
    // }

    cout<<"Size is : "<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    cout<<"Size is ; "<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity()<<endl;
    
    



}