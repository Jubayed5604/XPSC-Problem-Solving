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
    vi v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    if(n == 1){
        cout << v[0] << endl;
        return;
    }
    vi vv(n);
    vv = v;
    ll sum1 = 0,sum2 = 0;
    for(int i = 0; i < n; ++i){
        vv = v;
        reverse(vv.begin() + i,vv.end() - i);
        sum1 = max(sum1,accumulate(vv.begin(),vv.end() - i,0ll));
        sum1 = max(sum1,accumulate(v.begin(),v.end() - i,0ll));
        
    }
    debug(sum1);

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