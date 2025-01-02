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
#include "E:\\debug.h"
#endif

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    long long x, y, k;
    cin >> x >> y >> k;
    long long gc = __gcd(x, y);
    long long lc = (x * y )/ gc;
    if(k == 1){
        cout << min(gc,lc) + min(x,y) << endl;
    }
    else cout << 2 * min(gc,lc) << endl;
}



int main() {
    fast_io();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
