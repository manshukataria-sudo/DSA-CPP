#include <iostream>
#include <list>
#include <vector>
using namespace std;
vector<list<int>> graph;
int e;
void add_edge(int src, int dest, bool by_dir = true) {
    graph[src].push_back(dest);
    if (by_dir) {
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
int main() {
    int v;
    cout << "Enter the no. of vertices : ";
    cin >> v;
    graph.resize(v);
    cout << "Enter the no. of edges : ";
    cin >> e;
    while (e--) {
        int src, dest;
        cout << "Enter src and dest : ";
        cin >> src >> dest;
        add_edge(src, dest, false);  // behaves undirected on true and directed on false
    }
    display();
}