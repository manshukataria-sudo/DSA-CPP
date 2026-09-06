#include <climits>
#include <iostream>
#include <vector>
using namespace std;
class Solution {
   public:
    int f(vector<int>& nums, vector<vector<int>>& dp, int currIdx, int prev) {
        if (currIdx > nums.size()) {
            return 0;
        }
        if (dp[currIdx][prev] != -1) {
            return dp[currIdx][prev];
        }
        int temp1 = INT_MIN;
        if (prev == 0 || nums[prev - 1] < nums[currIdx - 1]) {
            temp1 = 1 + f(nums, dp, currIdx + 1, currIdx);
        }
        int temp2 = f(nums, dp, currIdx + 1, prev);
        return dp[currIdx][prev] = max(temp1, temp2);
    }
    int lengthOfLIS(vector<int>& nums) {
        int size = nums.size();
        vector<vector<int>> dp(size + 1, vector<int>(size + 1, -1));
        return f(nums, dp, 1, 0);
    }
};