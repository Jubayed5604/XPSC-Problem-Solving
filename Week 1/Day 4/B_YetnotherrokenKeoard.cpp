#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t;
    while (t--) { 
        string s; 
        cin >> s;
        vector<pair<char, int>> lower, upper;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != 'b' && s[i] != 'B') {
                if (s[i] >= 'a' && s[i] <= 'z')
                    lower.push_back({s[i], i});
                else if (s[i] >= 'A' && s[i] <= 'Z')
                    upper.push_back({s[i], i});
            }
            if (s[i] == 'b' && !lower.empty()) 
                lower.pop_back();
            if (s[i] == 'B' && !upper.empty()) 
                upper.pop_back();
        }

        int i = 0, j = 0;
        while (i < lower.size() && j < upper.size()) {
            if (lower[i].second < upper[j].second) {
                cout << lower[i].first;
                i++;
            } else {
                cout << upper[j].first;
                j++;
            }
        }

        while (i < lower.size()) {
            cout << lower[i].first;
            i++;
        }
        while (j < upper.size()) {
            cout << upper[j].first;
            j++;
        }
        cout << endl;
    }
    return 0;
}
