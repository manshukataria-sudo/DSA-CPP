#include<iostream>
#include<stack>
using namespace std;
class Node{
    public:
    int val;
    Node *next=NULL;
    Node *prev=NULL;
    Node(int val){
        this->val=val;
    }
};
void display(stack<int>st){
    while(st.size()!=0){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
class LinkedList{                   // user defined data structure
    public:
    Node *head;
    Node *tail;
    int size;
    LinkedList(){head=tail=NULL; size=0;}
    void insertAtEnd(int val){              // insert number at end
        Node *end=new Node(val);
        if(size==0){head=tail=end;}
        else{
            tail->next=end;
            tail=end;
        }
        size++;
    }
    void insertAtBegin(int val){                   // insert at beginning 
        Node *begin=new Node(val);
        if(size==0){head=tail=begin;}
        else{
            begin->next=head;
            head=begin;
        }
        size++;
    }
    void insertAtIdx(int idx,int val){                                     // insert at given point;
        if(idx<0 || idx>size) cout<<"...INVALID POSITION..."<<endl;
        else if(idx==0) insertAtBegin(val);
        else if(idx==size) insertAtEnd(val);
        else{
            Node *temp=new Node(val);
            Node *start=head;
            int i=1;
            while(i<idx){
                start=start->next;
                i++;
            }
            temp->next=start->next;
            start->next=temp;  
            size++;
        }
    }
    int getElementAt(int idx){
        if(idx<0 || idx>=size) cout<<"...INVALID INDEX..."<<endl;
        else{
            Node *temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            return temp->val;
        }
        return -1;
    }
    void deleteAtIdx(int idx){
        if(idx<0 || idx>=size) cout<<"...INVALID INDEX..."<<endl;
        else if(idx==0){head=head->next; size--;}
        else{
            Node *temp=head;
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
    }
    void display(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    display(st);
    LinkedList copy;
    while(st.size()>0){
        copy.insertAtEnd(st.top());
        st.pop();
    }
    Node *temp=copy.head;
    while(temp!=NULL){
        st.push(temp->val);
        temp=temp->next;
    }
    display(st);
    
}