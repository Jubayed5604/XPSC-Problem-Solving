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
#define debug(...) 42
#else
#include "E:\debug.h"
#endif
const int MOD = 1e9 + 7;
const ll INF = 1e18;
string toBinary(int num, int n) {
    string binary = "";
    while (num > 0) {
        binary = char('0' + (num % 2)) + binary;
        num /= 2;
    }
    while (binary.size() < n){
        binary = '0' + binary;
    }
    
    return binary;
}
void solve() {
    int n; cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    bool ans = false;
    for(int i = 1; i < (1<<n) and !ans; i++){
        string s = toBinary(i,n);
        int res = 0, c = 0;
        reverse(s.begin(),s.end());
        for(auto i: s){
            if(i=='1'){
                res += v[c];
            }
            else res -= v[c];
            c++;
        }
        if(res==0 or abs(res) % 360==0){
            ans = true;
        }
    }
    if(ans) cout << "YES" << endl;
    else cout << "NO" << endl;
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