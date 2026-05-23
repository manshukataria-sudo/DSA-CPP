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
void display(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
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
void displayRev(Node *tail){
    Node *temp=tail;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
}
void displayViaRandom(Node *random){
    while(random->prev!=NULL){
        random=random->prev;
    }
    while(random!=NULL){
        cout<<random->val<<" ";
        random=random->next;
    }
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

    display(a);
    cout<<endl;
    displayRec(a);
    cout<<endl;
    displayRecRev(a);
    cout<<endl;

    displayRev(e);
    cout<<endl;
    displayViaRandom(c);
    

}