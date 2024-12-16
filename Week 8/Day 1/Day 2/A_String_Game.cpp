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

string toBinary(int num) {
    string binary = "";
    while (num > 0) {
        binary = char('0' + (num % 2)) + binary;
        num /= 2;
    }
    return binary.empty() ? "0" : binary;
}

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int c = 0;
    vector<char>v;
    for (int i = 0; i < n; i++) {
        v.push_back(s[i]);
        if(v.size() > 1){
            if((v[v.size()-1]=='0' and v[v.size()-2]=='1') or(v[v.size()-1]=='1' and v[v.size()-2]=='0')){
                c++;
                v.pop_back();
                v.pop_back();
            }
        }
    }
    if(c%2)cout << "Zlatan" << endl;
    else cout << "Ramos" << endl;
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