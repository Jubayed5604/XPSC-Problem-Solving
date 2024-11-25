#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> ar(n);
        for (ll i = 0; i < n; i++) {
            cin >> ar[i];
        }
        sort(ar.begin(), ar.end());
        ll ans = 0;
        ll prefix_sum = 0;
        for (ll i = 0; i < n; i++) {
            if(i > 0){
                if (ar[i] <= prefix_sum) {
                    ans++;
                }
            }
            prefix_sum += ar[i];
        }
        cout << ans << endl;
        for (ll i = 0; i < n; i++) {
            cout << ar[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
