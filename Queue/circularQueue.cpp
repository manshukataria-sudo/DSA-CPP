#include <iostream>
#include <vector>
using namespace std;
class Cirque {
   private:
    vector<int> nums;
    int n = 0;
    int capacity;
    int f = 0;
    int b = 0;

   public:
    Cirque(int k) {
        this->capacity = k;
        nums.resize(k);
    }
    void push(int val) {
        if (n == capacity) {
            cout << "Cirque is full" << endl;
            return;
        }
        nums[b] = val;
        b++;
        if (b == capacity)
            b = 0;
        n++;
    }
    void pop() {
        if (n == 0) {
            cout << "Cirque is empty" << endl;
            return;
        }
        f++;
        if (f == capacity)
            f = 0;
        n--;
    }
    int size() { return this->n; }
    int front() {
        if (n == 0) {
            cout << "Cirque is empty" << " ";
            return -1;
        }
        return nums[f];
    }
    int back() {
        if (n == 0) {
            cout << "Cirque is empty" << " ";
            return -1;
        }
        if (b == 0)
            return nums[n - 1];
        return nums[b - 1];
    }
    bool empty() {
        if (n == 0)
            return 1;
        return 0;
    }
    void display() {
        if (n == 0) {
            cout << "Cirque is empty" << endl;
            return;
        }
        int temp = f;
        int i = 0;
        while (i < n) {
            cout << nums[temp] << " ";
            temp++;
            if (temp == capacity)
                temp = 0;
            i++;
        }
        cout << endl;
    }
};
int main() {
    Cirque cq(5);
    cq.push(10);
    cq.push(20);
    cq.push(30);
    cq.push(40);
    cq.display();
    cq.push(50);
    cout << cq.front() << endl;
    cout << cq.back() << endl;
    cq.pop();
    cout << cq.front() << endl;
    cout << cq.back() << endl;
    cq.display();
    cq.push(60);
    cq.display();
    cq.push(70);
    cq.display();
    cq.push(80);
    cout << cq.back() << endl;
    cout << cq.empty() << endl;
    cout << cq.size() << endl;
    cout << cq.back() << endl;
}