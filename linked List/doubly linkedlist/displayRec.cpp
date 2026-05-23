#include<iostream>
using namespace std;
class Node{
    public:
    Node *prev=NULL;
    int val;
    Node *next=NULL;
    Node(int val){
        this->val=val;
    }
};
void displayRec(Node *head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayRec(head->next);
}
void displayRecRev(Node *head){
    if(head==NULL) return;
    displayRecRev(head->next);
    cout<<head->val<<" ";
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

    b->prev=a;
    c->prev=b;
    d->prev=c;
    e->prev=d;

    displayRecRev(a);

}