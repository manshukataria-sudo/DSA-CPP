#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
    vector<int> nums = {10, 9, 8, 7, 4, 70, 60, 50};
    int k = 4;
    priority_queue<int, vector<int>, greater<int>> pq;
    int n = nums.size();
    // vector<int> ans;
    // for (int i = 0; i < n; i++) {
    //     pq.push(nums[i]);
    //     if (pq.size() > k) {
    //         ans.push_back(pq.top());
    //         pq.pop();
    //     }
    // }
    // while (pq.size()) {
    //     ans.push_back(pq.top());
    //     pq.pop();
    // }
    // for (int ele : ans) {
    //     cout << ele << endl;
    // }

    int idx = 0;
    for (int i = 0; i < n; i++) {
        pq.push(nums[i]);
        if (pq.size() > k) {
            nums[idx++] = pq.top();
            pq.pop();
        }
    }
    while (pq.size()) {
        nums[idx++] = pq.top();
        pq.pop();
    }
    for(int ele : nums){
        cout<<ele<<" ";
    }
    
}