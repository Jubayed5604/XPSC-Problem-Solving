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
#include "D:\debug.h"
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
    int n, m;
    cin >> n >> m;
    int ans = m * 4;
    vector<pair<int, int>> ar(n);
    
    for (int i = 0; i < n; i++) {
        cin >> ar[i].first >> ar[i].second;
        if (i > 0) {
            ar[i].first += ar[i - 1].first;
            ar[i].second += ar[i - 1].second;
        }
    }
    
    for (int i = 1; i < n; i++) {
        int chilo1 = ar[i - 1].first + m;
        int chilo2 = ar[i - 1].second + m;
        int nai = (chilo1 - ar[i].first) + (chilo2 - ar[i].second);
        ans += (m * 4) - (nai * 2);
    }
    
    cout << ans << endl;
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