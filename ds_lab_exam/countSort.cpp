#include <iostream>
#include <vector>
void countSort(std::vector<int>& input) {
    int n = input.size();
    int max = -1;
    for (int ele : input) {
        max = std::max(max, ele);
    }
    std::vector<int> count(max + 1, 0);
    for (int i = 0; i < n; i++) {
        count[input[i]]++;
    }
    for (int i = 1; i <= max; i++) {
        count[i] += count[i - 1];
    }
    std::vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--) {
        ans[--count[input[i]]] = input[i];
    }
    for (int i = 0; i < n; i++) {
        input[i] = ans[i];
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
        std::vector<int> nums(n, 0);
        std::cout << "Enter the array elements : ";
        for (int i = 0; i < n; i++) {
            std::cin >> nums[i];
        }
        countSort(nums);
        std::cout << "Sorted array is : ";
        for (int ele : nums) {
            std::cout << ele << " ";
        }
        std::cout << "\n";
    } catch (...) {
        std::cout << "...invalid array size...\n";
    }
}