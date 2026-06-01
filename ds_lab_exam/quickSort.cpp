#include <iostream>
#include <vector>
int corrIdx(std::vector<int>& nums, int lo, int hi, int mid) {
    int countS = 0;
    for (int i = lo; i <= hi; i++) {
        if (nums[i] < nums[mid]) {
            countS++;
        }
    }
    return lo + countS;
}
void arrange(std::vector<int>& nums, int lo, int hi, int pivot) {
    int i = pivot - 1;
    int j = pivot + 1;
    while (i >= lo && j <= hi) {
        if (nums[j] >= nums[pivot]) {
            j++;
        } else if (nums[i] < nums[pivot]) {
            i--;
        } else {
            std::swap(nums[i], nums[j]);
        }
    }
}
void quickSort(std::vector<int>& nums, int lo, int hi) {
    if (lo >= hi) {
        return;
    }
    int mid = lo + (hi - lo) / 2;
    int pivot = corrIdx(nums, lo, hi, mid);
    std::swap(nums[mid], nums[pivot]);
    arrange(nums, lo, hi, pivot);
    quickSort(nums, lo, pivot - 1);
    quickSort(nums, pivot + 1, hi);
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
        quickSort(nums, 0, n - 1);
        std::cout << "sorted array is : ";
        for (int ele : nums) {
            std::cout << ele << " ";
        }
        std::cout << "\n";
    } catch (...) {
        std::cout << "...invalid size...\n";
    }
}