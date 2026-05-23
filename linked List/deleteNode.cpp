#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node *next=NULL;
    Node(int val){this->val=val;}
};
Node* deleteNode(Node *head,Node *tar){
    if(tar==head){
        head=head->next;
        return head;
    }
    Node *temp=head;
    while(temp->next!=tar){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
}
void cutNode(Node *node){
    node=node->next;
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

    Node *head=a;
    //head=deleteNode(head,b);
    Node *temp=d;
    Node *temp2=head;

    while(temp2!=NULL){
        cout<<temp2->val<<" ";
        temp2=temp2->next;
    }

}