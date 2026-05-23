#include <iostream>
#include <unordered_map>
using namespace std;
bool isAnagram(string s, string t) {
    if (s.size() != t.size()) {
        return false;
    }
    unordered_map<char, int> mp;
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }
    for (int i = 0; i < t.size(); i++) {
        if (mp[t[i]] == 0) {
            return false;
        }
        mp[t[i]]--;
        if (mp[t[i]] == 0) {
            mp.erase(t[i]);
        }
    }
    if (mp.size() == 0) {
        return true;
    }
    return false;
}
int main() {
    string s;
    cin >> s;
    string t;
    cin >> t;
    cout << isAnagram(s, t) << endl;
    return 0;
}
