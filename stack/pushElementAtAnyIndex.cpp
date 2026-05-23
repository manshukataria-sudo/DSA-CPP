#include<iostream>
#include<stack>
using namespace std;
void insertAtidx(stack<int>&st,int ele,int idx){
    if(idx<0 || idx>st.size()){
        cout<<"Insertion not possible...INVALID INDEX..."<<endl;
        return;
    }
    stack<int>temp;
    while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(ele);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
void displayStack(stack<int>&st){
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    cout<<"Stack before insertion : ";
    displayStack(st);
    insertAtidx(st,100,7);
    cout<<"Stack after insertion : ";
    displayStack(st);
    
}