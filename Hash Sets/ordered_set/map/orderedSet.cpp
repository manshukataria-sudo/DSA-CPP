#include <iostream>
#include <unordered_map>
#include <map>
#include <set>
#include <queue>
using namespace std;
int main() {
    set<int> s;
    s.insert(1);
    s.insert(5);
    s.insert(4);
    s.insert(2);
    s.insert(3);
    for (auto ele : s) {
        cout << ele << " ";
    }
    cout << endl;
    map<int, int> m;
    m[3] = 20;
    m[6] = 10;
    m[1] = 30;
    // in ordered maps pairs are sorted on the basis of key
    for (auto ele : m) {
        cout << ele.first << " ";
        cout << ele.second << " ";
    }
    cout << endl;
    map<string, int> mp;

    mp["man"] = 1;
    mp["a"] = 10;
    mp["avc"] = 39;
    for (auto ele : mp) {
        cout << ele.first << " ";
    }
    cout<<endl;
    queue<pair<int, int>> q;
    q.push({1, 10});
    cout<<q.front().first<<" "<<q.front().second;
}