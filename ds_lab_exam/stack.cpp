#include <climits>
#include <iostream>
using namespace std;
class Node {
   public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};
class Stack {
   private:
    Node* head;
    int n;

   public:
    Stack() {
        head = NULL;
        this->n = 0;
    }
    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        n++;
    }
    void pop() {
        if (!n) {
            cout << "...underflow error...\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        n--;
    }
    bool isEmpty() { return n == 0; }
    int size() { return n; }
    int top() {
        if (!n) {
            cout << "...underflow error...\n";
            return INT_MIN;
        }
        return head->val;
    }
    void display() {
        if (!n) {
            cout << "...empty stack...\n";
            return;
        }
        Node* temp = head;
        while (temp) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};
int main() {
    int choice, val;
    Stack st;
    do {
        cout << "\n...STACK MENU...\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Top\n";
        cout << "4. Size\n";
        cout << "5. Is empty\n";
        cout << "6. Display\n";
        cout << "7. Exit\n\n";

        cout << "Enter choice : ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to insert : \n";
                cin >> val;
                st.push(val);
                break;
            case 2:
                st.pop();
                break;
            case 3:
                cout << st.top() << "\n";
                break;
            case 4:
                cout << st.size() << "\n";
                break;
            case 5:
                cout << st.isEmpty() << "\n";
                break;
            case 6:
                st.display();
                break;
            case 7:
                cout << "...Exited...\n";
                break;
            default:
                cout << "...invalid case...\n";
                break;
        }
    } while (choice!=7);
}