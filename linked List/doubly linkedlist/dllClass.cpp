#include <iostream>
using namespace std;
class Node {
   public:
    Node* prev = NULL;
    int val;
    Node* next = NULL;
    Node(int val) { this->val = val; }
};
class DLL {
   public:
    Node* head;
    Node* tail;
    int size;
    DLL() {
        this->head = NULL;
        this->tail = NULL;
        this->size = 0;
    }
    void insertAtTail(int val) {
        Node* temp = new Node(val);
        if (this->size == 0) {
            head = temp;
            tail = head;
        } else {
            this->tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val) {
        Node* temp = new Node(val);
        if (this->size == 0) {
            head = temp;
            tail = head;
        } else {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int val, int idx) {
        if (idx < 0 || idx > size) {
            cout << "...INVALID INDEX..." << endl;
            return;
        }
        if (idx == 0)
            insertAtHead(val);
        else if (idx == size)
            insertAtTail(val);
        else {
            Node* temp = new Node(val);
            Node* travel = this->head;
            for (int i = 0; i < idx - 1; i++) {
                travel = travel->next;
            }
            temp->next = travel->next;
            temp->prev = travel;
            travel->next->prev = temp;
            travel->next = temp;
            size++;
        }
    }
    void display() {
        Node* temp = this->head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
    void deleteHead() {
        if (size == 0) {
            cout << "...dll is empty...";
            return;
        } else if (size == 1) {
            head = tail = NULL;
        } else {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        size--;
    }
    void deleteTail() {
        if (size == 0) {
            cout << "...dll is empty...";
            return;
        } else if (size == 1) {
            head = tail = NULL;
        } else {
            Node* temp = tail;
            tail = tail->prev;
            tail->next = NULL;
            delete temp;
        }
        size--;
    }
    void deleteIdx(int idx) {
        if (idx < 0 || idx >= size) {
            cout << "...INVALID INDEX..." << endl;
            return;
        } else if (idx == 0) {
            this->deleteHead();
        } else if (idx == size - 1) {
            this->deleteTail();
        } else {
            Node* temp = head;
            for (int i = 0; i < idx; i++) {
                temp = temp->next;
            }
            Node* preNode = temp->prev;
            Node* postNode = temp->next;
            preNode->next = postNode;
            postNode->prev = preNode;
            delete (temp);
            size--;
        }
    }
};
int main() {
    DLL dll;
    dll.insertAtTail(50);
    dll.insertAtHead(10);
    dll.insertAtIdx(20, 1);
    dll.insertAtIdx(30, 2);
    dll.insertAtIdx(40, 3);
    dll.insertAtIdx(50, 4);
    dll.insertAtIdx(60, 5);
    dll.display();
    dll.deleteHead();
    dll.display();
    dll.deleteTail();
    dll.display();
    dll.insertAtIdx(100, 5);
    dll.display();
    dll.deleteIdx(-9);
    dll.deleteIdx(0);
    dll.deleteIdx(4);
    dll.display();
    cout << dll.size << endl;
    dll.insertAtIdx(45, 3);
    dll.insertAtIdx(46, 3);
    dll.insertAtIdx(47, 3);
    dll.display();
    dll.deleteIdx(4);
    dll.display();
}