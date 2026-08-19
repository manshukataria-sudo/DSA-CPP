#include <iostream>
#include <list>
#include <vector>
using namespace std;
vector<list<int>> graph;
void add_edge(int src, int dest, bool un_dir = true) {
    graph[src].push_back(dest);
    if (un_dir) {
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
    int v, e;
    cout << "Enter the no. of vertices : ";
    cin >> v;
    cout << "Enter the no. of edges : ";
    cin >> e;
    graph.resize(v);
    while (e--) {
        int src, dest;
        cout << "Enter the src and dest : ";
        cin >> src >> dest;
        add_edge(src, dest);
    }

    display();
}