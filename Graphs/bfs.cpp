#include <iostream>
#include <list>
#include <queue>
#include <unordered_set>
#include <vector>
using namespace std;
vector<list<int>> graph;
unordered_set<int> visited;
void display() {
    for (int i = 0; i < graph.size(); i++) {
        cout << i;
        for (auto ele : graph[i]) {
            cout << " -> " << ele;
        }
        cout << "\n";
    }
}
void bfs(int node = 0) {
    queue<int> q;
    q.push(node);
    visited.insert(node);
    while (q.size()) {
        int temp = q.front();
        cout << temp << " ";
        q.pop();
        for (auto ele : graph[temp]) {
            if (visited.count(ele)) {
                continue;
            }
            q.push(ele);
            visited.insert(ele);
        }
    }
}
int main() {
    graph.resize(6);
    graph[0] = {2, 3};
    graph[1] = {4, 5};
    graph[2] = {0, 4};
    graph[3] = {0, 4};
    graph[4] = {2, 3, 5, 1};
    graph[5] = {4, 1};

    display();
    cout << "\n";

    bfs(1);
}