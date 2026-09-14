#include <iostream>
#include <list>
#include <queue>
#include <vector>
using namespace std;
class Solution {
   public:
    void add_edge(vector<list<int>>& graph, vector<int>& indegree, vector<int>& edge) {
        graph[edge[1]].push_back(edge[0]);
        indegree[edge[0]]++;
    }
    vector<int> findOrder(int courses, vector<vector<int>>& prereq) {
        int prereqSize = prereq.size();
        vector<int> ans;
        vector<list<int>> graph(courses);
        vector<int> indegree(courses, 0);
        for (int i = 0; i < prereqSize; i++) {
            add_edge(graph, indegree, prereq[i]);
        }
        queue<int> q;
        for (int i = 0; i < courses; i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }
        while (q.size()) {
            int temp = q.front();
            q.pop();
            ans.push_back(temp);
            for (auto ele : graph[temp]) {
                indegree[ele]--;
                if (indegree[ele] == 0) {
                    q.push(ele);
                }
            }
        }
        if (ans.size() != courses) {
            ans.clear();
        }
        return ans;
    }
};
int main() {
    cout << '\n';
    return 0;
}