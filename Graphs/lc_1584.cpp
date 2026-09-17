#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
class Solution {
   public:
    int find(vector<int>& parent, int ele) {
        return parent[ele] = (parent[ele] == ele) ? ele : find(parent, parent[ele]);
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
    int minCostConnectPoints(vector<vector<int>>& p) {
        int p_count = p.size();
        vector<vector<int>> edgeList((p_count - 1) * (p_count) / 2);

        int index = 0;
        for (int i = 0; i < p_count; i++) {
            for (int j = i + 1; j < p_count; j++) {
                edgeList[index++] = {i, j, abs(p[i][0] - p[j][0]) + abs(p[i][1] - p[j][1])};
            }
        }

        sort(edgeList.begin(), edgeList.end(),
             [](vector<int>& a, vector<int>& b) { return a[2] < b[2]; });

        vector<int> rank(p_count, 1);
        vector<int> parent(p_count);

        for (int i = 0; i < p_count; i++) {
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
};

int main() {
    cout << '\n';
    return 0;
}