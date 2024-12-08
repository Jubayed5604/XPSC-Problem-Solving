#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while (t--) { 
        int n; cin >> n;
        int l = 1, r = 4;
        int ans = 1, prev = 1;
        while (n > prev) {
            while (r / 2 <= prev && r <= n) {
                r++;
                
            }
            cout << r << endl;
            prev = r;
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
