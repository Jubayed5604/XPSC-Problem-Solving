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
    int n;
    cin >> n;
    vector<int> v(n);
    int fst;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (i == 0) fst = v[i];
    }
    sort(v.begin(), v.end());
    int idx = find(v.begin(), v.end(), fst) - v.begin();
    int left_bound = (idx == 0) ? 1 : (v[idx - 1] + fst + 1) / 2;
    int right_bound = (idx == n - 1) ? 1'000'000 : (v[idx + 1] + fst) / 2;
    cout << max(0, right_bound - left_bound + 1) << '\n';
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