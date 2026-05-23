#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>&q){
    int n=q.size();
    for(int i=0;i<n;i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    display(q);
    int n=q.size();
    stack<int>st;
    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }
    for(int i=0;i<n/2;i++){
        q.push(st.top());
        st.pop();
    }
    while(st.size()>0){
        q.push(q.front());
        q.pop();
        q.push(st.top());
        st.pop();
    }
    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    display(q);

}