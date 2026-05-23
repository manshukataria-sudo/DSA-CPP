#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    stack<int>temp1;
    while(st.size()>0){
        temp1.push(st.top());
        st.pop();
    }
    stack<int>temp2;
    while(temp1.size()>0){
        temp2.push(temp1.top());
        temp1.pop();
    }
    while(temp2.size()>0){
        st.push(temp2.top());
        temp2.pop();
    }
    while(st.size()!=0){
        cout<<st.top()<<" ";
        temp1.push(st.top());
        st.pop();
    }

}