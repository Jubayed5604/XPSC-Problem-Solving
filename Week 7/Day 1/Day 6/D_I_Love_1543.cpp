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
    int n, m; cin >> n >> m;
    string s[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    vector<char>v[min(n/2,m/2)];
    char last1, last2, last3;
    for (int i = 0; i < min(n/2,m/2); i++) {
        for (int j = i; j < m - i; j++) {
            v[i].push_back(s[i][j]);
        }
        for(int k = i + 1; k < n - i; k++){
            v[i].push_back(s[k][m-i-1]);
        }
        for(int j = m - i - 2; j >= i; j--){
            v[i].push_back(s[n - i - 1][j]);
        }
        for(int k = n - i - 2; k > i; k--){
            v[i].push_back(s[k][i]);
        }
        v[i].push_back(v[i][0]);
        v[i].push_back(v[i][1]);
        v[i].push_back(v[i][2]);
    }
    // for(int i = 0; i < min(n/2,m/2); i++){
    //     for(int j = 0; j < v[i].size(); j++){
    //         cout << v[i][j];
    //     }
    //     cout << endl;
    // }
    int res = 0;
    for(int i = 0; i < min(n/2,m/2); i++){
        for(int j = 0; j < v[i].size() - 3; j++){
            if(v[i][j]=='1' and v[i][j+1] == '5' and v[i][j+2]=='4' and v[i][j+3]=='3'){
                res++;
            }
        }
    }
    cout << res << endl;
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