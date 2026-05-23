#include <iostream>
#include <vector>
using namespace std;
void subArray(vector<int>& nums, int i, vector<int> ans) {
    if (i == nums.size()) {
        for (int j = 0; j < ans.size(); j++) {
            cout << ans[j] << " ";
        }
        cout << endl;
        return;
    }
    subArray(nums, i + 1, ans);
    if (ans.size() == 0 || ans[ans.size() - 1] == nums[i - 1]) {
        ans.push_back(nums[i]);
        subArray(nums, i + 1, ans);
    }
}
int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans;
    subArray(nums, 0, ans);

    // int n=nums.size();
    // for(int i=0;i<n;i++){
    //     for(int j=n-1;j>=i;j--){
    //         for(int k=i;k<=j;k++){
    //             cout<<nums[k]<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }
}
