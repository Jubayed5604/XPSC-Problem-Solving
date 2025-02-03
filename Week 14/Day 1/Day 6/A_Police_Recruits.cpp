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
void solve() {
    int n; cin >> n;
    vi v(n);
    int pos = 0, hired = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        if(v[i] > 0){
            pos += v[i];
        }
        else{
            if(pos == 0)hired++;
            else pos--;
        }
    }
    cout << hired << endl;
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