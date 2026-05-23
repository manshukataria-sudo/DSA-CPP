#include<iostream>
using namespace std;
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
class Stack{
    public:
    Node *head=NULL;
    int idx=0;
    public:
    int top(){
        if(head==NULL) {
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        return this->head->val;
    }
    void push(int val){
        Node *preHead=new Node(val,head);
        head=preHead;
        idx++;
    }
    void pop(){
        if(head==NULL){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        head=head->next;
        idx--;
    }
    int size(){
        return this->idx;
    }
    void display(Node *head){
        if(head==NULL) return;
        display(head->next);
        cout<<head->val<<" ";
    }
};
int main(){
    Stack st;
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.pop();

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.display(st.head);

}