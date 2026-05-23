#include<iostream>
#include<stack>
using namespace std;
void displayStack(stack<int> st){
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
class Node{
    public:
    int val;
    Node *next=NULL;
    Node(int val){
        this->val=val;
    }
    Node(int val,Node *next){
        this->val=val;
        this->next=next;
    }
};
void displayLL(Node *head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    displayStack(st);
    Node *head=new Node(st.top());
    Node *traveller=head;
    st.pop();
    while(st.size()>0){
        Node *temp=new Node(st.top());
        traveller->next=temp;
        traveller=traveller->next;
        st.pop();
    }
    displayLL(head);
    traveller=head;
    while(traveller!=NULL){
        st.push(traveller->val);
        traveller=traveller->next;
    }
    displayStack(st);
}