#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    stack<int>st;                   // LIFO last in first out
    cout<<"Initial size is : "<<st.size()<<endl;
    // st.push(1);
    // for(int i=0;i<5;i++){
    //     st.push(i);
    // }
    // for(int i=0;i<6;i++){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    // cout<<endl;
    // cout<<st.size()<<endl;
    // cout<<st.empty()<<endl;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    stack<int>copySt;
    while(st.size()!=0){
        cout<<st.top()<<" ";
        copySt.push(st.top());
        st.pop();
    }
    cout<<endl;
    while(copySt.size()>0){
        cout<<copySt.top()<<" ";
        st.push(copySt.top());
        copySt.pop();
    }
    cout<<endl;
    cout<<st.top()<<endl;

}