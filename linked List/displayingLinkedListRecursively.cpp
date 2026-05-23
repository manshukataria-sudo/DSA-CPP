#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node *next=NULL;
    Node(int val){this->val=val;}
};
void display(Node *temp){
    if(temp==NULL) return;
    cout<<temp->val<<" ";
    display(temp->next);
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
    display(a);
}