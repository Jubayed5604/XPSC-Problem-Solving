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

string toBinary(ll num) {
    string binary = "";
    while (num > 0) {
        binary = char('0' + (num % 2)) + binary;
        num /= 2;
    }
    return binary.empty() ? "0" : binary;
}

void solve() {
    ll n; cin >> n;
    string binary = toBinary(n);
    string nw = "";
    bool paisi = false;
    vll v;
    ll x = ll(log2(n));
    if(ll(pow(2,x))==n)cout << 1 << endl << n << endl;
    else {
        for(ll i = 0; i < binary.size(); i++){
            if(binary[i]=='1'){
                binary[i] = '0'; 
                v.push_back(ll(stoll(binary,nullptr,2)));
                binary[i] = '1';
            }
        }
        v.push_back(n);
        cout << v.size() << endl;
        for(auto i: v)cout << i << " ";
        cout << endl;
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