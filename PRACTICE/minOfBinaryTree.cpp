#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node *left=NULL;
    Node *right=NULL;
    Node(int val){
        this->val=val;
    }
};
int minOfTree(Node *root){
    if(root==NULL) return INT_MAX;
    return min(root->val,min(minOfTree(root->left),minOfTree(root->right)));
}
int main(){
Node *a=new Node(1);
Node *b=new Node(637);
Node *c=new Node(10);
Node *d=new Node(1000);
Node *e=new Node(6573);
Node *f=new Node(1);
Node *g=new Node(46271);
a->left=b;
a->right=c;
b->left=d;
b->right=e;
c->left=f;
c->right=g;
cout<<minOfTree(a)<<endl;
}
