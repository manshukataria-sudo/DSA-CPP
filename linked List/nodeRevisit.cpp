#include<iostream>
#include<string>
using namespace std;
class Node{
    public:
    int val;
    Node *next=NULL;
    Node(int val){this->val=val;}
};
int main(){
    Node *a=new Node(10);
    Node *b=new Node(20);
    Node *c=new Node(30);
    Node *d=new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    cout<<a<<endl;
    cout<<a->val<<endl;
    cout<<a->next->next->val<<endl;
    Node *temp=a;
    
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }

}