#include <iostream>
#include <stack>
#include <vector>
using namespace std;
vector<int> nextSmallerElements(vector<int>& nums) {
    int n = nums.size();
    vector<int> nse(n, -1);
    if (n == 1 || n == 0)
        return nse;
    stack<int> temp;
    temp.push(nums[n - 1]);
    for (int i = n - 2; i >= 0; i--) {
        while (temp.size() > 0 && temp.top() >= nums[i]) {
            temp.pop();
        }
        if (temp.size() != 0)
            nse[i] = temp.top();
        temp.push(nums[i]);
    }
    return nse;
}
int main() {
    vector<int> nums = {2, 4, 1, 6, 78, 9, 3, 4, 5, 9, 2, 4, 6, 1, 67};
    vector<int> nse = nextSmallerElements(nums);
    for (int ele : nse) {
        cout << ele << " ";
    }
}