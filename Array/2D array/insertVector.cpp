#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> myVector;
    for(int ele:myVector){
        cout<<ele<<" ";
    }
    cout<<endl;

    myVector.insert(myVector.begin(),1);
    for(int ele:myVector){
        cout<<ele<<" ";
    }
    cout<<endl;
    myVector.insert(myVector.end(),1);
    for(int ele:myVector){
        cout<<ele<<" ";
    }
    cout<<endl;
    myVector.insert(myVector.begin(),1);
    for(int ele:myVector){
        cout<<ele<<" ";
    }
    cout<<endl;

}