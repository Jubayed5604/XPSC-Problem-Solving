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

void solve() {
    int n;
    cin >> n; 
    vi v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int ans = 0, mx = -1;
    for (int i = n - 1; i >= 1; i--) {
        if(v[i] > v[i-1]){
            int j = i - 1;
            while (j >= 0 && v[i] > v[j]) {
                ans++;
                j--;
            }
            mx = max(mx,ans);
            ans = 0;
            i = j + 1;
        }
    }
    cout << max(0,mx) << endl;
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
