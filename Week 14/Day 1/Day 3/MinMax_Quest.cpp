#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pi = pair<int, int>;
using pll = pair<ll, ll>;

#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define F first
#define S second

void solve() {
    int q; cin >> q;
    map<ll, ll> freq;
    set<pair<ll, ll>> sorted_freq;

    while(q--) {
        ll x; cin >> x;
        if(x == 2) {
            if(freq.empty()) {
                cout << "empty\n";
            } else {
                auto it = prev(sorted_freq.end());
                cout << it->second << "\n";

                ll val = it->second;
                sorted_freq.erase(it);

                if(freq[val] > 1) {
                    freq[val] -= freq[val] / 2;
                    sorted_freq.insert({-freq[val], val});
                } else {
                    freq.erase(val);
                }
            }
        } else {
            ll p; cin >> p;
            if(freq[p] > 0) {
                sorted_freq.erase({-freq[p], p});
            }
            freq[p]++;
            sorted_freq.insert({-freq[p], p});
        }
    }
}

int main() {
    fast_io();
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
