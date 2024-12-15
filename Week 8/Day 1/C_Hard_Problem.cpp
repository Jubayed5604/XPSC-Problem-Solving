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
    int m, a, b, c;
    cin >> m >> a >> b >> c;
    int m1 = m, m2 = m;
    int ans = 0;
    if(m1 >= a){
        ans += a;
        m1 -= a;
    }
    else {
        ans += m1;
        m1 = 0;
    }
    if(m2 >= b){
        ans += b;
        m2 -= b;
    }
    else {
        ans += m2;
        m2 = 0;
    }
    if(m1 + m2 >= c){
        ans += c;
    }
    else {
        ans += m1 + m2;
    }
    cout << ans << endl;

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