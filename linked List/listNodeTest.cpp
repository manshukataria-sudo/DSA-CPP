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
    Node *temp=a;
    Node *copyHead=new Node(temp->val);
    Node *pre=new Node(0,copyHead);

    for(int i=0;i<4;i++){
        Node *copyNode=new Node(temp->val,);
        temp=temp->next;
    }

}