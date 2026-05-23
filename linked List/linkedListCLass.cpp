#include <iostream>
#include <string>
using namespace std;
class Node {  // user defined data type
   public:
    int val;
    Node* next = NULL;
    Node(int val) { this->val = val; }
};
class LinkedList {  // user defined data structure
   public:
    Node* head;
    Node* tail;
    int size;
    LinkedList() {
        head = tail = NULL;
        size = 0;
    }
    void insertAtEnd(int val) {  // insert number at end
        Node* end = new Node(val);
        if (size == 0) {
            head = tail = end;
        } else {
            tail->next = end;
            tail = end;
        }
        size++;
    }
    void insertAtBegin(int val) {  // insert at beginning
        Node* begin = new Node(val);
        if (size == 0) {
            head = tail = begin;
        } else {
            begin->next = head;
            head = begin;
        }
        size++;
    }
    void insertAtIdx(int idx, int val) {  // insert at given point;
        if (idx < 0 || idx > size)
            cout << "...INVALID POSITION..." << endl;
        else if (idx == 0)
            insertAtBegin(val);
        else if (idx == size)
            insertAtEnd(val);
        else {
            Node* temp = new Node(val);
            Node* start = head;
            int i = 1;
            while (i < idx) {
                start = start->next;
                i++;
            }
            temp->next = start->next;
            start->next = temp;
            size++;
        }
    }
    int getElementAt(int idx) {
        if (idx < 0 || idx >= size)
            cout << "...INVALID INDEX..." << endl;
        else {
            Node* temp = head;
            for (int i = 1; i <= idx; i++) {
                temp = temp->next;
            }
            return temp->val;
        }
        return -1;
    }
    void deleteAtIdx(int idx) {
        if (idx < 0 || idx >= size)
            cout << "...INVALID INDEX..." << endl;
        else if (idx == 0) {
            head = head->next;
            size--;
        } else {
            Node* temp = head;
            for (int i = 1; i < idx; i++) {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main() {
    LinkedList m;
    m.insertAtEnd(10);
    m.display();
    m.insertAtEnd(20);
    m.insertAtEnd(30);
    m.display();
    m.insertAtEnd(40);
    m.insertAtEnd(50);
    m.display();
    cout << m.size << endl;
    m.insertAtBegin(1);
    m.insertAtBegin(100);
    m.insertAtBegin(200);  // 200 100 1 10 20 30 90 40 50

    m.insertAtIdx(6, 90);
    m.display();
    m.deleteAtIdx(6);
    m.display();
    // cout<<m.getElementAt(100)<<endl;
}