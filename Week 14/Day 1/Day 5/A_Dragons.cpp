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
    int m, n; cin >> m >> n;
    vector<pair<int,int>>v;
    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        v.push_back({x,y});
    }
    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
    return a.first == b.first ? a.second > b.second : a.first < b.first;
    });
    ll cost = m;
    for (int i = 0; i < n; i++) {
        if(cost > v[i].first){
            cost += v[i].second;
        }
        else {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
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