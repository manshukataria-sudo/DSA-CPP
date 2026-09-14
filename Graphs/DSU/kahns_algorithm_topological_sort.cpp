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

// using the KAHN's Algorithm
void topoBFS() {
    int vertices = graph.size();
    vector<int> indegree(vertices, 0);
    for (int i = 0; i < vertices; i++) {
        for (auto ele : graph[i]) {
            indegree[ele]++;
        }
    }
    queue<int> q;
    unordered_set<int> visited;
    for (int i = 0; i < vertices; i++) {
        if (indegree[i] == 0) {
            q.push(i);
            visited.insert(i);
        }
    }

    while (q.size()) {
        int temp = q.front();
        q.pop();
        cout << temp << " ";
        for (auto ele : graph[temp]) {
            if (!visited.count(ele)) {
                indegree[ele]--;
                if (!indegree[ele]) {
                    q.push(ele);
                    visited.insert(ele);
                }
            }
        }
    }
}

int main() {
    int vertices;
    cout << "Enter the no. of vertices : ";
    cin >> vertices;
    graph.resize(vertices);
    vector<int> indegree(vertices, 0);
    int edges;
    cout << "Enter the no. of edges : ";
    cin >> edges;
    while (edges--) {
        int src, dest;
        cin >> src >> dest;
        add_edge(src, dest, false);
    }

    display();

    cout << "\n";
    topoBFS();
    cout << '\n';
    return 0;
}