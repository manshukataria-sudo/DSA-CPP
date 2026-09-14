#include <iostream>
#include <list>
#include <queue>
#include <vector>
using namespace std;
class Solution {
   public:
    void add_edge(vector<int>& edge, vector<list<int>>& graph, vector<int>& indegree) {
        indegree[edge[0]]++;
        graph[edge[1]].push_back(edge[0]);
    }
    bool canFinish(int courses, vector<vector<int>>& prereq) {
        int prereqSize = prereq.size();
        vector<list<int>> graph(courses);
        vector<int> indegree(courses);
        for (int i = 0; i < prereqSize; i++) {
            add_edge(prereq[i], graph, indegree);
        }
        queue<int> q;
        int count = 0;
        for (int i = 0; i < indegree.size(); i++) {
            if (indegree[i] == 0) {
                q.push(i);
                indegree[i] = -1;
            }
        }
        while (q.size()) {
            int temp = q.front();
            q.pop();
            count++;
            for (auto ele : graph[temp]) {
                indegree[ele]--;
                if (indegree[ele] == 0) {
                    q.push(ele);
                    indegree[ele] = -1;
                }
            }
        }
        return courses == count;
    }
};
int main() {
    cout << '\n';
    return 0;
}