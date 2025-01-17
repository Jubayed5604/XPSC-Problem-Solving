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
    int n, k;
    cin >> n >> k;
    vector<int> v(n), idx;
    map<int, int> mp;
    idx.push_back(-1);
    bool p = false;
    int fid = -1, lid = -1;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (!p && v[i] == k) fid = i;
        if (v[i] == k) lid = i;
        mp[v[i]]++;
        if (v[i] == k) idx.push_back(i);
    }
    idx.push_back(n);
    bool paisi = false;
    int c = 0;
    for (auto i : mp) {
        if (i.first != k && i.second > mp[k]) c++;
    }
    if (c == 0) cout << 0 << endl;
    else {
        int ans = 0;
        for (int i = 0; i < fid; i++) {
            mp[v[i]]--;
        }
        for (auto i : mp) {
            if (i.first != k && i.second > mp[k]) {
                ans++;
            }
        }
        if (ans == 0) {
            cout << 1 << endl;
            return;
        }
        for (int i = 0; i < fid; i++) {
            mp[v[i]]++;
        }
        for (int i = fid + 1; i < n; i++) {
            mp[v[i]]--;
        }
        ans = 0;
        for (auto i : mp) {
            if (i.first != k && i.second > mp[k]) {
                ans++;
            }
        }
        if (ans == 0) {
            cout << 1 << endl;
            return;
        }
        cout << 2 << endl;
    }
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