#include <iostream>
#include <vector>
using namespace std;
int giveCorrectIdx(vector<int>& nums, int srtIdx, int endIdx) {
    int pivotNum = nums[(srtIdx + endIdx) / 2];
    int count = 0;
    for (int i = srtIdx; i <= endIdx; i++) {
        if (i == (srtIdx + endIdx) / 2)
            continue;
        if (nums[i] <= pivotNum)
            count++;
    }
    return count + srtIdx;
}
void swapAcrossPivot(vector<int>& nums, int srtIdx, int correctIdx, int endIdx) {
    while (srtIdx < correctIdx && endIdx > correctIdx) {
        if (nums[srtIdx] <= nums[correctIdx])
            srtIdx++;
        if (nums[endIdx] > nums[correctIdx])
            endIdx--;
        else if (nums[srtIdx] > nums[correctIdx] && nums[endIdx] <= nums[correctIdx])
            swap(nums[srtIdx++], nums[endIdx--]);
    }
}
void quickSort(vector<int>& nums, int srtIdx, int endIdx) {
    if (srtIdx >= endIdx)
        return;
    int correctIdx = giveCorrectIdx(nums, srtIdx, endIdx);
    swap(nums[correctIdx], nums[(srtIdx + endIdx) / 2]);
    swapAcrossPivot(nums, srtIdx, correctIdx, endIdx);
    quickSort(nums, srtIdx, correctIdx - 1);
    quickSort(nums, correctIdx + 1, endIdx);
}
int main() {
    int arr[] = {-90, 8, 78, 90, -67, -23, 0, 23, 45, 1, -90};
    int n1 = sizeof(arr) / sizeof(int);
    vector<int> nums(arr, arr + n1);
    int srtIdx = 0;
    int endIdx = nums.size() - 1;
    for (int ele : nums) {
        cout << ele << " ";
    }
    quickSort(nums, srtIdx, endIdx);
    cout << endl;
    for (int ele : nums) {
        cout << ele << " ";
    }
}