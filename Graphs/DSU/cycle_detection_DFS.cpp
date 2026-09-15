#include <iostream>
#include <list>
#include <unordered_set>
#include <vector>
using namespace std;

vector<list<int>> graph;

void add_edge(int src, int dest, bool bidir = false) {
    graph[src].push_back(dest);
    if (bidir) {
        graph[dest].push_back(src);
    }
}

void display() {
    for (int i = 0; i < graph.size(); i++) {
        cout << i;
        for (auto ele : graph[i]) {
            cout << " -> " << ele;
        }
        cout << "\n";
    }
}

unordered_set<int> visited;

bool dfs(int src, int parent) {
    visited.insert(src);
    for (auto ele : graph[src]) {
        if (!visited.count(ele)) {
            bool ans = dfs(ele, src);
            if (ans == true) {
                return true;
            }
        } else if (visited.count(ele) && ele != parent) {
            return true;
        }
    }
    return false;
}

bool cycle(int src, int parent) {
    bool ans;
    for (int i = 0; i < graph.size(); i++) {
        if (!visited.count(i)) {
            ans = dfs(i, -1);
            if (ans) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int vertices, edges;
    cin >> vertices >> edges;
    graph.resize(vertices);
    while (edges--) {
        int src, dest;
        cin >> src >> dest;
        add_edge(src, dest, true);
    }

    if (cycle(0, -1)) {
        cout << "Cycle detected" << "\n";
    } else {
        cout << "No Cycle" << "\n";
    }

    cout << '\n';
    return 0;
}