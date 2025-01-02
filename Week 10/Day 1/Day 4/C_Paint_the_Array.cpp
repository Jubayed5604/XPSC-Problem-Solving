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

#ifdef ONLINE_JUDGE
#define debug(...) 41
#else
#include "E:\debug.h"
#endif

const int MOD = 1e9 + 7;
const ll INF = 1e18;

string toBinary(int num, int n) {
    string binary = "";
    while (num > 0) {
        binary = char('0' + (num % 2)) + binary;
        num /= 2;
    }
    while(binary.size() < n)binary = '0' + binary;
    return binary;
}

void solve() {
    ll n;
    cin >> n;
    vll v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    ll last0 = 0, last1 = 0, last = 0;
    for (ll i = 0; i < n; i++) {
        if (i % 2 == 0)
            last0 = __gcd(v[i], last0);
        else
            last1 = __gcd(v[i], last1);
        last = __gcd(last,v[i]);
    }
    ll ans = 0;
    bool ok = true;
    for (ll i = 1; i < n; i += 2) {
        if (v[i] % last0 == 0) {
            ok = false;
        }
    }
    if(ok)cout << last0 << endl;
    else {
        ok = true;
        for (ll i = 0; i < n; i += 2) {
            if (v[i] % last1 == 0) {
                cout << 0 << endl;
                return;
            }
        }
        if(ok)cout << last1 << endl;
        else cout << 0 << endl;
    }
}

int main() {
    fast_io();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}