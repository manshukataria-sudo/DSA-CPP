#include <iostream>
#include <queue>
#include <vector>
using namespace std;
class Node {
   public:
    int val;
    Node* left = NULL;
    Node* right = NULL;
    Node(int val) { this->val = val; }
};
Node* constructBST(vector<int>& levelOrder) {
    queue<Node*> q;
    Node* root = new Node(levelOrder[0]);
    q.push(root);
    int i = 1;
    while (i < levelOrder.size()) {
        Node* temp = q.front();
        q.pop();
        if (levelOrder[i] != -1) {
            temp->left = new Node(levelOrder[i]);
        }
        i++;
        if (i < levelOrder.size()) {
            if (levelOrder[i] != -1) {
                temp->right = new Node(levelOrder[i]);
            }
            i++;
        }
        if (temp->left) {
            q.push(temp->left);
        }
        if (temp->right) {
            q.push(temp->right);
        }
    }
    return root;
}
void inorder(Node* root) {
    if (!root) {
        return;
    }
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}
void pred(Node* root, int val) {
    Node* temp = root;
    if (root == NULL)
        return;
    while (temp->val != val) {
        if (temp->val > val) {
            temp = temp->left;
        } else {
            temp = temp->right;
        }
    }
    if (temp->left == NULL) {
        return;
    } else {
        temp = temp->left;
    }
    while (temp->right != NULL) {
        temp = temp->right;
    }
    cout << temp->val << endl;
}
void succ(Node* root, int val) {
    Node* temp = root;
    if (root == NULL)
        return;
    while (temp->val != val) {
        if (temp->val > val) {
            temp = temp->left;
        } else {
            temp = temp->right;
        }
    }
    if (temp->right == NULL) {
        return;
    } else {
        temp = temp->right;
    }
    while (temp->left != NULL) {
        temp = temp->left;
    }
    cout << temp->val << endl;
}
int main() {
    vector<int> levelOrder = {10, 5,  20, 2,  8,  15, 25, -1, 4, -1,
                              -1, 12, -1, -1, -1, 3,  -1, -1, 13};
    Node* root = constructBST(levelOrder);
    inorder(root);
    cout << endl;
    pred(root, 20);
    succ(root, 20);
}