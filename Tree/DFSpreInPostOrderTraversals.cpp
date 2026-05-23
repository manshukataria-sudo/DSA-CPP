#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void preOrder(Node *root){
    if(root==NULL) return;
    cout<<root->val<<" ";           // root left right
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(Node *root){
    if(root==NULL) return;
    inOrder(root->left);
    cout<<root->val<<" ";
    inOrder(root->right);
}
void postOrder(Node *root){
    if(root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->val<<" ";
}
int main(){
    Node *a=new Node(1);
    Node *b=new Node(2);
    Node *c=new Node(3);
    Node *d=new Node(4);
    Node *e=new Node(5);
    Node *f=new Node(6);
    Node *g=new Node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    cout<<endl<<"...PRE ORDER..."<<endl;
    preOrder(a);
    cout<<endl;
    cout<<endl<<"...IN ORDER..."<<endl;
    inOrder(a);
    cout<<endl;
    cout<<endl<<"...POST ORDER..."<<endl;
    postOrder(a);
}