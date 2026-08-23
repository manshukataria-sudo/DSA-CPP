#include <iostream>
#include <list>
#include <queue>
#include <unordered_set>
#include <vector>
using namespace std;
vector<list<int>> graph;
unordered_set<int> visited;
vector<int> shortestPath;
void display() {
    for (int i = 0; i < graph.size(); i++) {
        cout << i;
        for (auto ele : graph[i]) {
            cout << " -> " << ele;
        }
        cout << "\n";
    }
}
void bfs(int src) {
    queue<int> q;
    q.push(src);
    visited.insert(src);
    while (q.size()) {
        int temp = q.front();
        cout << temp << " ";
        q.pop();
        for (auto ele : graph[temp]) {
            if (!visited.count(ele)) {
                q.push(ele);
                visited.insert(ele);
            }
        }
    }
}
int main() {
    graph.resize(7);
    graph[0] = {1, 4};
    graph[1] = {0, 3, 5};
    graph[2] = {5, 6};
    graph[3] = {1, 4};
    graph[4] = {0, 3};
    graph[5] = {1, 6, 2};
    graph[6] = {2, 5};

    display();
    cout << "\n";
    int src = 0;
    bfs(src);
}