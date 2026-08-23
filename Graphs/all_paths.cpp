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
vector<vector<int>> allPaths;
// void all_paths(int src, int dest, string path) {
//     if (src == dest) {
//         allPaths.push_back(path);
//         return;
//     }
//     visited.insert(src);
//     for (auto ele : graph[src]) {
//         if (visited.find(ele) != visited.end()) {
//             continue;
//         }
//         all_paths(ele, dest, path + " -> " + to_string(ele));
//     }
//     visited.erase(src);
//     return;
// }

void all_paths(int src, int dest, vector<int>& ans) {
    if (src == dest) {
        ans.push_back(src);
        allPaths.push_back(ans);
        ans.pop_back();
        return;
    }
    visited.insert(src);
    ans.push_back(src);
    for (auto ele : graph[src]) {
        if (visited.count(ele)) {
            continue;
        }
        all_paths(ele, dest, ans);
    }
    ans.pop_back();
    visited.erase(src);
    return;
}
int main() {
    graph.resize(6);
    graph[0] = {2, 3};
    graph[1] = {4, 5};
    graph[2] = {0, 4};
    graph[3] = {0, 4};
    graph[4] = {2, 3, 5, 1};
    graph[5] = {4, 1};

    // visited.resize(graph.size());

    display();
    cout << "\n";
    cout << "all possible paths are : " << "\n";
    int src = 0;
    vector<int> ans;
    all_paths(src, 1, ans);

    for (auto ele : allPaths) {
        for (auto node : ele) {
            cout << node << " ";
        }
        cout << "\n";
    }
}