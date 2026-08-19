#include <iostream>
#include <list>
#include <vector>
using namespace std;
vector<list<pair<int, int>>> graph;
void add_edge(int src, int dest, int weight, bool by_dir = true) {
    graph[src].push_back({dest, weight});
    if (by_dir) {
        graph[dest].push_back({src, weight});
    }
}
void display() {
    for (int i = 0; i < graph.size(); i++) {
        cout << i;
        for (auto pair : graph[i]) {
            cout << " -> " << pair.first << "(" << pair.second << ")";
        }
        cout << "\n";
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
        int src, dest, weight;
        cout << "Enter src, dest, weight : ";
        cin >> src >> dest >> weight;
        add_edge(src, dest, weight);
    }
    display();
}