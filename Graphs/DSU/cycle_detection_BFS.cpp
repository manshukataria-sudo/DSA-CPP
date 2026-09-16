#include <iostream>
#include <list>
#include <queue>
#include <unordered_set>
#include <vector>
using namespace std;
vector<list<int>> graph;
void add_edge(int src, int dest, bool bidir = true) {
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

bool bfs(int sRow, int sCol) {
    unordered_set<int> visited;
    vector<int> parent(graph.size());
    parent[0] = -1;
    queue<int> q;
    q.push(0);
    visited.insert(0);
    while (q.size()) {
        int temp = q.front();
        q.pop();
        for (auto ele : graph[temp]) {
            if (!visited.count(ele)) {
                parent[ele] = temp;
                visited.insert(ele);
                q.push(ele);
            } else if (visited.count(ele) && parent[temp] != ele) {
                return true;
            }
        }
    }
    return false;
}
int main() {
    int vert, edges;
    cin >> vert >> edges;
    graph.resize(vert);
    while (edges--) {
        int src, dest;
        cin >> src >> dest;
        add_edge(src, dest, true);
    }

    // display();

    if (bfs(0, 0)) {
        cout << "Cycle detected" << "\n";
    } else {
        cout << "no cycle" << "\n";
    }
    cout << '\n';
    return 0;
}