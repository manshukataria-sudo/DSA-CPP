#include <iostream>
using namespace std;
class TreeNode {
   public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) {
        this->val = val;
        left = right = NULL;
    }
};
class BST {  // bst always have unique values
   private:
    TreeNode* root;

    TreeNode* putVal(TreeNode* root, int val) {
        if (!root) {
            return new TreeNode(val);
        }
        if (root->val == val) {
            cout << "...value already exists...\n";
            return root;
        }
        if (root->val < val) {
            root->right = putVal(root->right, val);
        } else {
            root->left = putVal(root->left, val);
        }
        return root;
    }
    bool find(TreeNode* root, int target) {
        if (!root) {
            return 0;
        }
        if (root->val == target) {
            return 1;
        }
        if (root->val < target) {
            return find(root->right, target);
        }
        return find(root->left, target);
    }
    void inorder(TreeNode* root) {
        if (!root) {
            return;
        }
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
    TreeNode* removeNode(TreeNode* root, int val) {
        if (!root) {
            cout << "...element doesn't exist to delete...\n";
            return root;
        }
        if (root->val > val) {
            root->left = removeNode(root->left, val);
        } else if (root->val < val) {
            root->right = removeNode(root->right, val);
        } else {
            if (!root->left && !root->right) {
                delete (root);
                return NULL;
            } else if (root->left && root->right) {
                minValNode(root->right)->left = root->left;
                return root->right;
            } else {
                TreeNode* temp;
                if (root->left) {
                    temp = root->left;
                } else {
                    temp = root->right;
                }
                delete (root);
                return temp;
            }
        }
        return root;
    }
    TreeNode* minValNode(TreeNode* root) {
        while (root && root->left) {
            root = root->left;
        }
        return root;
    }

   public:
    BST() { root = NULL; }
    void display() {
        if (!root) {
            cout << "...no elements...\n";
            return;
        }
        inorder(root);
        cout << "\n";
    }
    bool search(int val) { return find(root, val); }
    void insert(int val) { this->root = putVal(root, val); }
    void deleteNode(int val) {
        if (!root) {
            cout << "...no element to delete...\n";
            return;
        }
        root = removeNode(root, val);
    }
};
int main() {
    int choice, val;
    BST bst;
    do {
        cout << "\n===BST MENU===\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Search\n";
        cout << "4. Display\n";
        cout << "5. Exit\n\n";

        cout << "Enter choice : ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the element to insert : ";
                cin >> val;
                bst.insert(val);
                break;
            case 2:
                cout << "Available elements are : ";
                bst.display();
                cout << "Enter the element to delete : ";
                cin >> val;
                bst.deleteNode(val);
                break;
            case 3:
                cout << "Enter the element to search : ";
                cin >> val;
                if (bst.search(val)) {
                    cout << val << " found\n";
                } else {
                    cout << val << " not found\n";
                }
                break;
            case 4:
                cout << "Available elements are : ";
                bst.display();
                break;
            case 5:
                cout << "...exited...\n";
                break;

            default:
                cout << "...invalid choice...\n";
                break;
        }
    } while (choice != 5);
}