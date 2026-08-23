#include <iostream>
#include <list>
#include <queue>
#include <unordered_set>
#include <vector>
using namespace std;
vector<list<int> > graph;
unordered_set<int> visited;
vector<int> dist;
void display() {
    for (int i = 0; i < graph.size(); i++) {
        cout << i;
        for (auto ele : graph[i]) {
            cout << " -> " << ele;
        }
        cout << "\n";
    }
}
// void f(int src) {
//     queue<int> q;
//     q.push(src);
//     visited.insert(src);
//     int level = 0;
//     while (q.size()) {
//         int n = q.size();
//         for (int i = 0; i < n; i++) {
//             int temp = q.front();
//             dist[temp] = level;
//             q.pop();
//             cout << temp << " ";
//             for (auto ele : graph[temp]) {
//                 if (!visited.count(ele)) {
//                     q.push(ele);
//                     visited.insert(ele);
//                 }
//             }
//         }
//         level++;
//     }
// }

void f(int src) {
    queue<int> q;
    q.push(src);
    visited.insert(src);
    while (q.size()) {
        int temp = q.front();
        cout << temp << " ";
        q.pop();
        for (auto ele : graph[temp]) {
            if (!visited.count(ele)) {
                q.push(ele);
                visited.insert(ele);
                dist[ele] = dist[temp] + 1;
            }
        }
    }
}
int main() {
    graph.resize(7);
    dist.resize(7);
    graph[0] = {1, 4};
    graph[1] = {0, 3, 5};
    graph[2] = {5, 6};
    graph[3] = {1, 4};
    graph[4] = {0, 3};
    graph[5] = {1, 6, 2};
    graph[6] = {2, 5};

    display();
    cout << "\n";
    int src = 0;
    cout << "bfs of the graph is : ";
    f(src);
    cout << "\n";

    for (int i = 0; i < dist.size(); i++) {
        cout << i << " -> " << dist[i] << "\n";
    }
    cout << "\n";
}