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
    int n; cin >> n;
    char d; cin >> d;
    string s;
    if(n >= 4){
        s = "";
        for(int i = 0; i <= 18; i++){
            s += d;
        }
    }
    else {
        if(n==3) n = 6;
        for(int i = 0;i < n; i++){
            s+= d;
        } 
    }
    set <int> st;
    while(s.size() > 0){
        ll num = stoll(s);
        for(int i = 1; i < 10; i += 2){
            if(ll(num  % i)==0){
                st.insert(i);
            }
        }
        s.pop_back();
    }
    for (auto &i : st)
    cout << i << ' ';
    cout << endl;
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