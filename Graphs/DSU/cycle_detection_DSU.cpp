#include <iostream>
#include <vector>

using namespace std;

int find(vector<int>& parent, int ele) {
    return parent[ele] = (parent[ele] == ele) ? ele : find(parent, parent[ele]);
}

bool Union(vector<int>& parent, vector<int>& rank, int a, int b) {
    a = find(parent, a);
    b = find(parent, b);

    if (a == b) {
        return true;
    }
    if (rank[a] >= rank[b]) {
        parent[b] = a;
        rank[a]++;
    } else {
        parent[a] = b;
        rank[b]++;
    }
    return false;
}

void detectCycle(vector<vector<int>>& edgeSet, int vertices) {
    vector<int> parent(vertices);
    vector<int> rank(vertices, 1);
    for (int i = 0; i < vertices; i++) {
        parent[i] = i;
    }

    for (int i = 0; i < edgeSet.size(); i++) {
        bool cycle = Union(parent, rank, edgeSet[i][0], edgeSet[i][1]);
        if (cycle) {
            cout << "Cycle detected" << "\n";
            return;
        }
    }
    cout << "No cycle" << "\n";
}

int main() {
    int vertices, edges;
    cin >> vertices >> edges;
    vector<vector<int>> edgeSet(edges);
    for (int i = 0; i < edges; i++) {
        vector<int> edge(2);
        cin >> edge[0] >> edge[1];
        edgeSet[i] = edge;
    }

    detectCycle(edgeSet, vertices);
    cout << '\n';
    return 0;
}