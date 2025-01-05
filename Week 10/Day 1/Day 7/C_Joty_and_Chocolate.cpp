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
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll pp = n / a, qq = n / b;
    ll pq = 0, i = 1;
    if(__gcd(a,b) != 1){ 
            for(i = 1; i <= min(a,b) and (max(a,b) * i) <= n; i++){
            if((max(a,b) * i) % min(a,b) == 0){
                pq++;
            }
        }
        if(a * b <= n){
        pq = pq * (n / (a * b));
        for(int i = 1; i <= n % (a * b); i++){
            if(i % a==0 and i % b==0)pq++;
        }
    }
    }
    else {
        pq = n / (a * b);
    }
    //cout << pq << endl;
    pp -= pq;
    qq -= pq;
    //cout << pq << endl;
    //cout << pq << " " << pp << " " << qq << endl;
    cout << ll(ll(pp * p) + ll(qq * q) + ll(max(p,q) * pq)) << endl;
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