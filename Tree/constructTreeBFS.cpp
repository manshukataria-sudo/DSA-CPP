#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Node
{
public:
    int val;
    Node *left = NULL;
    Node *right = NULL;
    Node(int val)
    {
        this->val = val;
    }
};
void display(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    display(root->left);
    display(root->right);
}
Node *construct(vector<int> &levelOrder)
{
    int n = levelOrder.size();
    Node *root = new Node(levelOrder[0]);
    queue<Node *> helper;
    helper.push(root);
    int i = 1;
    while (i < n)
    {
        Node *temp = helper.front();
        helper.pop();
        if (i < n)
        {
            if (levelOrder[i] != -1)
            {
                temp->left = new Node(levelOrder[i]);
            }
            i++;
        }
        if (i < n)
        {
            if (levelOrder[i] != -1)
            {
                temp->right = new Node(levelOrder[i]);
            }
            i++;
        }
        if (temp->left != NULL)
        {
            helper.push(temp->left);
        }
        if (temp->right != NULL)
        {
            helper.push(temp->right);
        }
    }
    return root;
}
void displayLevel(Node *root)
{
    queue<Node *> helper;
    helper.push(root);
    while (helper.size() > 0)
    {
        Node *temp = helper.front();
        helper.pop();
        cout << temp->val << " ";
        if (temp->left != NULL)
        {
            helper.push(temp->left);
        }
        if (temp->right != NULL)
        {
            helper.push(temp->right);
        }
    }
}
int main()
{
    vector<int> levelOrder = {1,2,3,4,5,-1,6,7,-1,8,-1,9,10,-1,11,-1,12,-1,13,-1,14,15,16,-1,17,-1,-1,18,-1,19,-1,-1,-1,20,21,22,23,-1,24,25,26,27,-1,-1,28,-1,-1};
    Node *root = construct(levelOrder);
    display(root);
    cout << endl;
    displayLevel(root);
}// -1 represents NULL
