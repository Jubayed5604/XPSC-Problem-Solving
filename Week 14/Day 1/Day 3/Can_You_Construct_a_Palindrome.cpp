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

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    map<char,int>mp;
    for (int i = 0; i < n; i++) {
        mp[s[i]]++;
    }
    int odd = 0;
    for(auto i: mp){
        if(i.second % 2)odd++;
    }
    if(odd - 1 > k)cout << "NO\n";
    else cout << "YES\n";
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