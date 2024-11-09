#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;
    for (int i = 1; i <= t; i++) {
        ll n, k; cin >> n >> k;
        ll res = 0;
        for (ll i = 0; i < n; i++) {
            ll x, y; cin >> x >> y;
            res += (k / max(x, y));
        }
        cout << "Case " << i << ": " << res << '\n';
    }
    return 0;
}