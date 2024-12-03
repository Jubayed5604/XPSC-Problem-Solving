#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
        }
        int mn = INT_MAX, mx = 0;
        int mnidx = -1, mxidx = -1;
        for (int i = 0; i < n; i++) {
            if (mp[s[i]] < mn || (mp[s[i]] == mn && s[i] < s[mnidx])) {
                mn = mp[s[i]];
                mnidx = i;
            }
            if (mp[s[i]] > mx || (mp[s[i]] == mx && s[i] > s[mxidx])) {
                mx = mp[s[i]];
                mxidx = i;
            }
        }
        s[mnidx] = s[mxidx];
        cout << s << endl;
    }
    return 0;
}
