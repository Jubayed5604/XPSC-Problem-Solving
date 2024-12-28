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
    int n; cin >> n;
    vi v(n+1);
    ll odd = 0, even = 0, o = 0, e = 0;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        if (i & 1) {
            odd += v[i];
        } else {
            even += v[i];
        }
    }
    e = n/2;
    o = n - n/2;
    if (odd % o != 0 or even % e != 0) {
        cout << "NO" << endl; 
        return;
    }
    if(even / e == odd/o)cout << "YES" << endl;
    else cout << "NO" << endl;
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