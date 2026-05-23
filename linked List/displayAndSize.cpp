#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node *next=NULL;
    Node(int val){this->val=val;}
};
void display(Node *a){
    Node *temp=a;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtEnd(Node *head){
    int val;
    cout<<"Enter the value you wanna enter : ";
    cin>>val;
    Node *end=new Node(val);
    Node *temp=head;
    while(temp->next!=NULL){temp=temp->next;}
    temp->next=end;
}
int size(Node *a){
    Node *temp=a;
    int size=0;
    while(temp!=NULL){
        size++;
        temp=temp->next;
    }
    return size;
}
int main(){
    Node *a=new Node(10);
    Node *b=new Node(20);
    Node *c=new Node(30);
    Node *d=new Node(40);
    Node *e=new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    insertAtEnd(a);
    display(a);
    cout<<"Size of linkedlist is : "<<size(a);

}