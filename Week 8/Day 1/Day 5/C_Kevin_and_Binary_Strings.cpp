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

int binaryToDecimal(const string& binaryString) {
    int decimalValue = 0;
    for (char c : binaryString) {
        decimalValue = (decimalValue << 1) + (c - '0');
    }
    return decimalValue;
}

string toBinary(int num) {
    string binary = "";
    while (num > 0) {
        binary = char('0' + (num % 2)) + binary;
        num /= 2;
    }
    return binary;
}

void solve() {
    string s;
    cin >> s;
    int n = binaryToDecimal(s);
    map<int,string>mp;
    int ans = 0;
    for (int i = 1; i < n; i++) {
        string ss = toBinary(i);
        if (s.find(ss) != string::npos) {
            if ((n ^ i) > ans) {
                mp[i] = ss;
                ans = n ^ i;
            }
        }
    }
    cout << 1 << ' ' << s.size() << ' ';
    int in1 =  s.find(prev(mp.end())->second);
    cout << in1 + 1 << ' ' << in1 + prev(mp.end())->second.size() << endl;
    // debug(mp);
    //for(auto i: mp)cout << i.second << " ";
    // cout << endl;
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
