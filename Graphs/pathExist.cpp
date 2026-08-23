#include <iostream>
#include <list>
#include <unordered_set>
#include <vector>
using namespace std;
vector<list<int>> graph;
unordered_set<int> visited;
void display() {
    for (int i = 0; i < graph.size(); i++) {
        cout << i;
        for (auto ele : graph[i]) {
            cout << " -> " << ele;
        }
        cout << "\n";
    }
}

// using the vector<bool> as visited array
// vector<bool> visited;
// bool path_exists(int src, int dest) {
//     visited[src] = true;
//     for (auto ele : graph[src]) {
//         if (visited[ele]) {
//             continue;
//         }
//         if (ele == dest || path_exists(ele, dest)) {
//             return true;
//         }
//     }
//     return false;
// }

bool path_exists(int src, int dest) {
    if (src == dest) {
        return true;
    }
    visited.insert(src);
    for (auto ele : graph[src]) {
        if (visited.find(ele) != visited.end()) {
            continue;
        }
        if (path_exists(ele, dest)) {
            return true;
        };
    }
    return false;
}
int main() {
    graph.resize(6);
    graph[0] = {2, 3};
    graph[1] = {};
    graph[2] = {0, 4};
    graph[3] = {0, 4};
    graph[4] = {2, 3, 5};
    graph[5] = {4};

    // visited.resize(graph.size());

    display();
    cout << "\n";

    cout << path_exists(3, 5) << "\n";
}