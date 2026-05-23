#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
    vector<int> v = {1, 0, -45, 8, 200, 12, 9, 5, 30, 78, -23, -76};
    int k = 7;
    // sort(v.begin(), v.end());
    // cout << v[k - 1] << endl;

    // using minHeap

    // priority_queue<int, vector<int>, greater<int>> minPq;
    // for (int ele : v) {
    //     minPq.push(ele);
    // }
    // int ans;
    // for (int i = 0; i <= k - 1; i++) {
    //     ans = minPq.top();
    //     minPq.pop();
    // }
    // cout << ans << endl;

    // using max Heap
    priority_queue<int> maxPq;  // best  T.C = O(nlogK)
    // for (int i = 0; i < k; i++) {
    //     maxPq.push(v[i]);
    // }
    // for(int i=k;i<v.size();i++){
    //     maxPq.push(v[i]);
    //     maxPq.pop();
    // }
    // cout<<maxPq.top()<<endl;
    for (int i = 0; i < v.size(); i++) {
        maxPq.push(v[i]);
        if (maxPq.size() > k) {
            maxPq.pop();
        }
    }
    cout << maxPq.top() << endl;
}