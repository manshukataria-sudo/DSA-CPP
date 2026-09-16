#include <algorithm>
#include <iostream>
#include <list>
#include <vector>
using namespace std;
int find(vector<int>& parent, int ele) {
    return parent[ele] = (ele == parent[ele]) ? ele : find(parent, parent[ele]);
}
bool Union(vector<int>& parent, vector<int>& rank, int a, int b) {
    a = find(parent, a);
    b = find(parent, b);

    if (a == b) {
        return false;
    }
    if (rank[a] >= rank[b]) {
        parent[b] = a;
        rank[a]++;
    } else {
        parent[a] = b;
        rank[b]++;
    }
    return true;
}
int kruskal(int vert, vector<vector<int>>& edgeList) {
    vector<int> parent(vert);
    vector<int> rank(vert, 1);

    for (int i = 0; i < parent.size(); i++) {
        parent[i] = i;
    }
    int weight = 0;
    for (int i = 0; i < edgeList.size(); i++) {
        if (Union(parent, rank, edgeList[i][0], edgeList[i][1])) {
            weight += edgeList[i][2];
        }
    }
    return weight;
}
int main() {
    int vert, edges;
    cin >> vert >> edges;
    vector<vector<int>> edgeList(edges, vector<int>(3));

    // src >> dest >> wt
    for (int i = 0; i < edges; i++) {
        cin >> edgeList[i][0] >> edgeList[i][1] >> edgeList[i][2];
    }

    sort(edgeList.begin(), edgeList.end(),
         [](vector<int>& a, vector<int>& b) { return a[2] < b[2]; });

    cout << kruskal(vert, edgeList);
}