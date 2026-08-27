#include <iostream>
#include <list>
#include <unordered_set>
#include <vector>
using namespace std;
unordered_set<int> visited;
vector<list<int>> graph;
void display() {
    for (int i = 0; i < graph.size(); i++) {
        cout << i;
        for (auto ele : graph[i]) {
            cout << " -> " << ele;
        }
        cout << "\n";
    }
}
void dfs(int src) {
    visited.insert(src);
    for (auto ele : graph[src]) {
        if (!visited.count(ele)) {
            dfs(ele);
        }
    }
    visited.insert(src);
}
int f() {
    int ans = 0;
    for (int i = 0; i < graph.size(); i++) {
        if (!visited.count(i)) {
            dfs(i);
            ans += 1;
        }
    }
    return ans;
}
int main() {
    graph.resize(7);
    graph[0] = {1, 3};
    graph[1] = {0, 3, 4};
    graph[2] = {};
    graph[3] = {0, 1, 4};
    graph[4] = {1, 3};
    graph[5] = {6};
    graph[6] = {5};
    display();

    cout << f();
}