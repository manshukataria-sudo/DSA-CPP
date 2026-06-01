#include <climits>
#include <iostream>
#include <vector>
void countSort(std::vector<int>& nums, int pos) {
    int n = nums.size();
    std::vector<int> count(10, 0);
    for (int i = 0; i < n; i++) {
        count[(nums[i] / pos) % 10]++;
    }
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }
    std::vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--) {
        ans[--count[(nums[i] / pos) % 10]] = nums[i];
    }
    for (int i = 0; i < n; i++) {
        nums[i] = ans[i];
    }
}
void radixSort(std::vector<int>& nums) {
    int max_ele = INT_MIN;
    for (int ele : nums) {
        max_ele = std::max(ele, max_ele);
    }
    for (int pos = 1; max_ele / pos > 0; pos *= 10) {
        countSort(nums, pos);
    }
}
int main() {
    int n;
    std::cout << "Enter the size of array : ";
    std::cin >> n;
    try {
        if (n <= 0) {
            throw "error";
        }
        std::vector<int> nums(n);
        std::cout << "Enter the array elements : ";
        for (int i = 0; i < n; i++) {
            std::cin >> nums[i];
        }
        radixSort(nums);
        std::cout << "sorted array is : ";
        for (int ele : nums) {
            std::cout << ele << " ";
        }
        std::cout << "\n";
    } catch (...) {
        std::cout << "...invalid size...\n";
    }
}