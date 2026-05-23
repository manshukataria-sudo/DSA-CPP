#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;
int main() {
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(7);
    s.insert(7);
    s.insert(7);
    cout << s.size() << endl;
    // s.erase(1);
    // s.erase(3);
    // set always store unique values
    // even the size not increase due to duplicate values
    for (int ele : s) {
        cout << ele << " ";
    }
    cout << endl;
    int target = 7;
    if (s.find(target) != s.end()) {
        cout << "exists" << endl;
    } else {
        cout << "does not exist" << endl;
    }
    string str ="abc";
    reverse(str.begin(), str.end());
    cout<<str;
    
}
