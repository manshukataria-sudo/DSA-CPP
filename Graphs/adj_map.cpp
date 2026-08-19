#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
vector<unordered_map<int, int>> graph;

void add_edge(int src, int dest, bool by_dir = true) {
    graph[src][dest] = -1;
    if (by_dir) {
        graph[dest][src] = -1;
    }
}
void display() {
    for (int i = 0; i < graph.size(); i++) {
        cout << i;
        for (auto ele : graph[i]) {
            cout << " -> " << ele.first << "(" << ele.second << ")";
        }
        cout << endl;
    }
}
int main() {
    int v, e;
    cout << "Enter the no. of vertices : ";
    cin >> v;
    graph.resize(v);
    cout << "Enter the no. of edges : ";
    cin >> e;
    while (e--) {
        int src, dest;
        cout << "Enter src, dest : ";
        cin >> src >> dest;
        add_edge(src, dest);
    }
    display();
}