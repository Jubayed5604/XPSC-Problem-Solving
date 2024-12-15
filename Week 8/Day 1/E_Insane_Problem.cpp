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
    int k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;
    vector<int>v;
    int i = 0;
    int kk = k;
    while(kk < r1/2){
        v.push_back(kk);
        kk *= k;
    }
    if(v.size()==0){
        if(l1==1 and k >= l2 and k <= r2)cout << 1 << endl;
        else cout << 0 << endl;
    }
    else {
        ll c = 0;
        for(int i = v[0]; i <= v[v.size() - 1]; i++){
            for(int j = l1; j <= r1; j++){
                if(i * j >= l2 and i * j <= r2)c++;
                if(i*j > r2)break;
            }
        }
        cout << c << endl;
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