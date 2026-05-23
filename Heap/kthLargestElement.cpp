#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
    vector<int> v = {1, 2, 10, -8, -9, -90, 34, 21, 3, 78};
    int k = 5;
    // using minHeap
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < v.size(); i++) {
        pq.push(v[i]);
        if(pq.size()>k){
            pq.pop();
        }
    }
    cout<<pq.top()<<endl;
}