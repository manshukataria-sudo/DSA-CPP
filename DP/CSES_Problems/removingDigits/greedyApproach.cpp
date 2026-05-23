#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int minSteps(int n) {
    int count = 0;
    while (n > 0) {
        vector<int> digits(8);
        int temp = n;
        for (int i = 1; i <= 7; i++) {
            digits[i] = temp % 10;
            temp /= 10;
        }
        n -= max({digits[1], digits[2], digits[3], digits[4], digits[5], digits[6], digits[7]});
        count++;
    }
    return count;
}
int main() {
    int n;
    cin >> n;
    cout << minSteps(n);
}