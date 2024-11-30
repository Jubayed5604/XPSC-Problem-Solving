#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (s[i][j] == '?') {
                    bool valid = true;
                    if (i > 0 && s[i - 1][j] == 'D') valid = false;
                    if (i < n - 1 && s[i + 1][j] == 'U') valid = false;
                    if (j > 0 && s[i][j - 1] == 'L') valid = false;
                    if (j < m - 1 && s[i][j + 1] == 'R') valid = false;
                    if (valid) ans++;
                } else {
                    if (s[i][j] == 'U' && i > 0 && s[i - 1][j] == '?') ans++;
                    if (s[i][j] == 'D' && i < n - 1 && s[i + 1][j] == '?') ans++;
                    if (s[i][j] == 'L' && j > 0 && s[i][j - 1] == '?') ans++;
                    if (s[i][j] == 'R' && j < m - 1 && s[i][j + 1] == '?') ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
