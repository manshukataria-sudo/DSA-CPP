#include<iostream>
#include<stack>
using namespace std;
void pushAtBottom(stack<int>&st,int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x=st.top();
    st.pop();
    pushAtBottom(st,val);
    st.push(x);
}
void displayRev(stack<int>&st){
    if(st.size()==0) return;
    int x=st.top();
    cout<<x<<" ";
    st.pop();
    displayRev(st);
    st.push(x);
}
void display(stack<int>st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}

void revStackRec(stack<int>&st){
    if(st.size()==1) return;
    int x=st.top();
    st.pop();
    revStackRec(st);
    pushAtBottom(st,x);
}

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    
    // displayRev(st);
    // cout<<endl;

    // stack<int>m=st; stacks can be assigned
    //displayStack(m);

    display(st);
    cout<<endl;
    revStackRec(st);
    display(st);

}