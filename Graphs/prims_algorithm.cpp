#include <climits>
#include <iostream>
#include <list>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#define inf INT_MAX
#define pp pair<int, int>
using namespace std;

vector<list<pp>> graph;

int prims(int src) {
    unordered_set<int> visited;
    priority_queue<pp, vector<pp>, greater<pp>> pq;

    vector<int> weight(graph.size() + 1, inf);
    for (int i = 1; i <= graph.size(); i++) {
        weight[i] = inf;
    }
    pq.push({0, src});
    weight[src] = 0;
    int total_weight = 0;
    int count = 0;
    while (count < graph.size() && pq.size()) {
        pp temp = pq.top();
        pq.pop();
        if (!visited.count(temp.second)) {
            visited.insert(temp.second);
            count++;
            total_weight += temp.first;
            for (auto ele : graph[temp.second]) {
                if (!visited.count(ele.second) && ele.first < weight[ele.second]) {
                    weight[ele.second] = ele.first;
                    pq.push({ele.first, ele.second});
                }
            }
        }
    }
    return total_weight;
}
void add_edge(int src, int wt, int dest, bool bidir = true) {
    graph[src].push_back({wt, dest});
    if (bidir) {
        graph[dest].push_back({wt, src});
    }
}
int main() {
    int n, m;
    cin >> n >> m;
    graph.resize(n + 1);
    while (m--) {
        int src, dest, wt;
        cin >> src >> dest >> wt;
        add_edge(src, wt, dest, true);
    }

    int src;
    cin >> src;
    cout << prims(src);

    return 0;
}