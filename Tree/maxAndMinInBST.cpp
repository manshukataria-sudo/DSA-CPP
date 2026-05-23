#include <iostream>
#include <vector>
using namespace std;
class Node {
   public:
    int val;
    Node* left = NULL;
    Node* right = NULL;
    Node(int val) { this->val = val; }
};
Node* constructBST(vector<int>& inorder, int lo, int hi) {
    if(lo>hi){
        return NULL;
    }
    if(lo==hi){
        return new Node(inorder[lo]);
    }
    int mid;
    if((hi-lo)%2==0){
        mid=(lo+hi)/2;
    }
    else{
        mid=(lo+hi)/2+1;
    }
    Node* root = new Node(inorder[mid]);
    root->left = constructBST(inorder, lo, mid - 1);
    root->right = constructBST(inorder, mid + 1, hi);
    return root;
}
void displayIn(Node *root){
    if(!root){
        return;
    }
    displayIn(root->left);
    cout<<root->val<<" ";
    displayIn(root->right);
}
int maxBST(Node *root){
    // if(!root->left && !root->right){
    //     return root->val;
    // }
    // return maxBST(root->right);
    Node *temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp->val;
}
// int minBST(Node *root){
//     if(!root->left && !root->right){
//         return root->val;
//     }
//     return minBST(root->left);
// }
int minBST(Node *root){
    Node *temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp->val;
}
int main() {
    vector<int> inorder = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    Node* root = constructBST(inorder, 0, inorder.size()-1);
    displayIn(root);
    cout<<endl;
    cout<<maxBST(root)<<endl;
    cout<<minBST(root)<<endl;
}