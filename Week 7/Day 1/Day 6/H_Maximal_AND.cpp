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

string toBinary(int num, int len) {
    string binary = "";
    while (num > 0) {
        binary = char('0' + (num % 2)) + binary;
        num /= 2;
    }
    while (binary.size() <= len){
        binary = '0' + binary;
    }
    return binary;
}

void solve() {
    int n, k; cin >> n >> k;
    vi v(n);
    int maxSetBit = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        maxSetBit = max(maxSetBit, __lg(v[i]));
    }
    vector<string>vv;
    map<int,int,greater<int>>mp;
    for(int i = 0; i < 31; i++)mp[i] = 0;
    for (int i = 0; i < n; i++){
        string s = toBinary(v[i], maxSetBit);
        for(int j = s.size()- 1; j >= 0; j--){
            if(s[j]=='0')mp[s.size() - j - 1]++;
        }  
    }   
    for(int i = maxSetBit+1; i < 31; i++)mp[i] = n;
    // for(auto i: mp)cout << i.first << " " << i.second << endl;
    // cout << endl;

    int res = 0;
    for(auto i: mp){
        if(k >= i.second){
            res += (1<<i.first);
            k = k - i.second;
        }
    }
    cout << res << endl;
    
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