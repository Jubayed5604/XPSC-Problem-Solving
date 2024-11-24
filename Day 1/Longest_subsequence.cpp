#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        map<char, int> freq;
        int l = 0, r = 0;
        int ans = -1;
        while (r < s.size()) {
            freq[s[r]]++;
            while (freq.size() > k) {
                freq[s[l]]--;
                if (freq[s[l]] == 0) {
                    freq.erase(s[l]);
                }
                l++;
            }
            if (freq.size() == k) {
                ans = max(ans, r - l + 1);
            }
            r++;
        }
        return ans;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;

        cout << "\n";
    }
}
