#include <iostream>
using namespace std;
class Stack {
   private:
    int arr[5];
    int idx = 0;
   public:
    void push(int val) {
        if (idx >= 5) {
            cout << "Stack Overflow" << endl;
            return;
        }
        this->arr[idx] = val;
        idx++;
    }
    void pop() {
        if (idx - 1 < 0) {
            cout << "Stack Underflow" << endl;
            return;
        }
        this->arr[idx - 1] = 0;
        idx--;
    }
    int top() {
        if (idx - 1 < 0) {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        return this->arr[idx - 1];
    }
    int size() { return this->idx; }
};
int main() {
    Stack st;
    cout << st.top() << endl;
    cout << st.size() << endl;
    cout << st.top() << endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    cout << st.size() << endl;
    cout << st.top() << endl;
    st.pop();
    cout << st.size() << endl;
}