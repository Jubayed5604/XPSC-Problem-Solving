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
    int n, m , k; cin >> n >> m >> k;
    vi a(m), b(k);
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }
    vi v;
    bool ar[n+1];
    for(int i = 1; i <= n; i++){
        ar[i] = false;
    } 
    for(int i = 0;i < k; i++){
        cin >> b[i];
        if(!ar[b[i]]){
            ar[b[i]] = true;
        }
    }
    for(int i = 1; i <= n; i++){
        if(!ar[i]){
            v.push_back(i);
        }
    }
    string s = "";
    if(n - 1 > k){
        while(m--){
            s += "0";
        }
    }
    else{
        if(m <= k){
            while(m--){
                s += "1";
            }
        }
        else{
            while(m--){
                s += "0";
            }
            for(int i = 0; i < v.size(); i++){
                s[v[i] - 1] = '1';
            }
        }
    }
    cout << s << endl;
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