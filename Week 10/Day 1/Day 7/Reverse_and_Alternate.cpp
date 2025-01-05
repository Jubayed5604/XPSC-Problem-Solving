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
    string s; cin >> s;
    int zero = 0, one = 0;
    for (int i = 0; i < n - 1; i++) {
        if(s[i]=='0' and s[i + 1]=='0'){
            zero++;
        }
        else if(s[i]=='1' and s[i + 1]=='1'){
            one++;
        }
    }
    if(one==0 and zero==0)cout << "Yes" << endl;
    if(one > 1 or zero > 1)cout << "No" << endl;
    else if(one==1 and zero==1)cout << "Yes" << endl;
    else if(one==1){
        if(s[0] == '0' or s[n-1]=='0')cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    else if(zero==1) {
        if(s[0]=='1' or s[n-1]=='1')cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    //else cout << "Yes" << endl;
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