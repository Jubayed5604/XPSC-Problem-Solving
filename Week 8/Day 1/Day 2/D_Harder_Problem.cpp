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

string toBinary(int num) {
    string binary = "";
    while (num > 0) {
        binary = char('0' + (num % 2)) + binary;
        num /= 2;
    }
    return binary.empty() ? "0" : binary;
}

void solve() {
    int n; 
    cin >> n; 
    vector<int> v(n); 
    map<int, int> s; 
    int mx = 0; 
    vector<bool> a(n + 1, false);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] <= n && !a[v[i]]) {
            s[i] = v[i];
            a[v[i]] = true;
        }
        mx = max(mx, v[i]);
    }
    vector<int> vv; 
    vector<bool> ar(max(n+1,mx+1), false); 
    for (auto i : s) {
        vv.push_back(i.second);
        ar[i.second] = true;
    }
    int c = s.size(); 
    for (int i = 1; i <= max(n, mx); i++) {
        if (!ar[i]) {
            vv.push_back(i);
            ar[i] = true;
            c++;
        }
        if (c == n) break;
    }
    for (auto i : vv) cout << i << " "; 
    cout << endl;
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