#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<vector<int>> dp(31, vector<int>(1001, -1));
    cout<<dp[30][1000];
}