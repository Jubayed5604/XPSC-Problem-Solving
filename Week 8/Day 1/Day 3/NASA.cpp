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
bool isPalindrome(const string& s) {
    int left = 0, right = s.size() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vi v(n);
    
    vi vv, vvv(32769);
    for(int i = 0; i <= 32767; i++){
        string str = to_string(i);
        if(isPalindrome(str)){
            vv.push_back(i);
        }
    }
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        vvv[v[i]]++;

    }
    ll ans = n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < vv.size(); j++) {
            int val = (v[i] ^ vv[j]);
            ans += vvv[val];
        }
    }
    cout << ans/2 << endl;
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