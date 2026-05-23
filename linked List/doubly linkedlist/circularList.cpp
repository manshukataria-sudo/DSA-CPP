#include<iostream>
using namespace std;
// class Node{
//     public:
//     int val;
//     Node *next=NULL;
//     Node(int val){
//         this->val=val;
//     }
// };
class Node{
    public:
    Node *prev=NULL;
    int val;
    Node *next=NULL;
    Node(int val){
        this->val=val;
    }
};
int main(){
    // circular lisnked list
    // Node *a=new Node(10);
    // Node *b=new Node(20);
    // Node *c=new Node(30);
    // Node *d=new Node(40);
    // Node *e=new Node(50);

    // a->next=b;
    // b->next=c;
    // c->next=d;
    // d->next=e;
    // e->next=a;
    // insertion at the end of a circular list
    // Node *newEnd=new Node(60);
    // Node *temp=a;
    // while(temp->next!=a){
    //     temp=temp->next;
    // }
    // temp->next=newEnd;
    // newEnd->next=a;
    // return head;

    // circular doubly linked list
    Node *a=new Node(10);
    Node *b=new Node(20);
    Node *c=new Node(30);
    Node *d=new Node(40);
    Node *e=new Node(50);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=a;

    e->prev=d;
    d->prev=c;
    c->prev=b;
    b->prev=a;
    a->prev=e;

    // insertion node at the tail in Dll;
    Node *newEnd=new Node(60);
    Node *temp=a;
    while(temp->next!=a){
        temp=temp->next;
    }
    temp->next=newEnd;
    newEnd->next=a;
    newEnd->prev=temp;
    a->prev=newEnd;
    // return a;
}