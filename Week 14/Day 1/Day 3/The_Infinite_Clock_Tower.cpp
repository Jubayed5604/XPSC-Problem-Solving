#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pi = pair<int, int>;
using pll = pair<ll, ll>;

#define fast_io() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define mp make_pair
#define F first
#define S second

const long long MOD = 1000000007;

ll PowerMOD(ll k, ll ok, ll mod) {
    ll result = 1;
    while (ok > 0) {
        if (ok % 2 == 1)
            result = (result * k) % mod;
        k = (k * k) % mod;
        ok /= 2;
    }
    return result;
}

void solve() {
    long long n, h;
    cin >> n >> h;
    vector<long long> v;
    while (n > 0) {
        v.push_back(n % 10);
        n /= 10;
    }
    long long ans = 0;
    for (long long i = 0; i < v.size(); i++) {
        v[i] = 9 - v[i];
        v[i] = v[i] / 2;
        long long p = h - v[i];
        long long x = p / 5;
        if (p % 5 != 0 && p > 0) {
            x += 2;
        } else {
            x++;
        }
        v[i] = PowerMOD(2, x - 1, MOD);
    }
    for (long long i = 0; i < v.size(); i++) {
        ans = (ans + v[i]) % MOD;
    }
    cout << ans << endl;
}

int main() {
    fast_io();
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
