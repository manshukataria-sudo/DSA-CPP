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
void displayLevel(Node* root) {
    queue<Node*> helper;
    helper.push(root);
    while (helper.size() > 0) {
        Node* temp = helper.front();
        helper.pop();
        cout << temp->val << " ";
        if (temp->right != NULL) {
            helper.push(temp->right);
        }
        if (temp->left != NULL) {
            helper.push(temp->left);
        }
    }
}
int main() {
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    displayLevel(a);
}
