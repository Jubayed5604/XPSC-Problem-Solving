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
    int n, m, k; cin >> n >> m >> k;
    vi v(m+1);
    int mxBit = 0;
    cout << toBinary(n,__lg(n)) << endl;
    for (int i = 0; i < m + 1; i++) {
        cin >> v[i];
        int l = __lg(v[i]);
        mxBit = max(mxBit,l);
    }
    for (int i = 0; i < m + 1; i++) {
        string s = toBinary(v[i],mxBit + 1);
        cout << s << endl;
    }

}

int main() {
    fast_io();
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}