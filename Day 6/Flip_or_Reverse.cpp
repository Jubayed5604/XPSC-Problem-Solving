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
    int n; cin >> n;
    string s1, s2; cin >> s1 >> s2;
    vector<pair<int,int>>v;
    
    for(int i = 0; i < n; i++){
        if(s1[i] != s2[i]){
            v.push_back({i,i+1});
            v.push_back({i+1,i + 2});
        }
    }
    map<int,int>mp;
    for(auto i: v){
        if(i.first != 0 and i.second <= n){
            mp[i.first] = i.second;
        }
    }
    cout << mp.size() << endl;
    for(auto i: mp){
        cout << i.first << " " << i.second << " " << n << endl;
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