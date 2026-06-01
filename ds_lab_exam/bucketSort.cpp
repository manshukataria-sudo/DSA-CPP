#include <iostream>
#include <vector>
void insertionSort(std::vector<double>& nums) {
    int n = nums.size();
    for (int i = 1; i < n; i++) {
        for (int j = i; j >= 1; j--) {
            if (nums[j] < nums[j - 1]) {
                std::swap(nums[j], nums[j - 1]);
            } else {
                break;
            }
        }
    }
}
void bucketSort(std::vector<double>& nums) {
    int n = nums.size();
    std::vector<std::vector<double>> buckets(n);
    for (int i = 0; i < n; i++) {
        buckets[int(nums[i] * n)].push_back(nums[i]);
    }
    for (int i = 0; i < n; i++) {
        if (buckets[i].size() > 1) {
            insertionSort(buckets[i]);
        }
    }
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < buckets[i].size(); j++) {
            nums[k++] = buckets[i][j];
        }
    }
}
int main() {
    int n;
    std::cout << "Enter the size of array : ";
    std::cin >> n;
    std::vector<double> nums(n);
    std::cout << "Enter the array elements : ";
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    bucketSort(nums);
    std::cout << "Sorted array is : ";

    for(auto ele : nums){
        std::cout<<ele<<" ";
    }
    std::cout << "\n";
}