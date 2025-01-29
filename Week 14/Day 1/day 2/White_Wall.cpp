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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    int rgb = 0, rbg = 0, gbr = 0, grb = 0, bgr = 0, brg = 0;
    for(int i = 0; i < s.size()-2; i++){
        if(s[i]=='R' and s[i+1]=='G' and s[i+2]=='B')rgb++;
        if(s[i]=='R' and s[i+1]=='B' and s[i+2]=='G')rbg++;
        if(s[i]=='G' and s[i+1]=='R' and s[i+2]=='B')grb++;
        if(s[i]=='G' and s[i+1]=='B' and s[i+2]=='R')gbr++;
        if(s[i]=='B' and s[i+1]=='R' and s[i+2]=='G')brg++;
        if(s[i]=='B' and s[i+1]=='G' and s[i+2]=='R')bgr++;
    }
    vi v = {rgb,rbg,grb,gbr,brg,bgr};
    int mx = 0, idx = -1;
    for(int i = 0; i < 6; i++){
        if(v[i] > mx){
            mx = v[i];
        }
    }
    //debug(mx);
    if(mx==rgb){
        for (int i = 0; i < n; i += 3) {
            if(s[i] != 'R')ans++;
            if(s[i+1] != 'G')ans++;
            if(s[i+2] != 'B')ans++;
        }
    }
    else if(mx==rbg){
        for (int i = 0; i < n; i += 3) {
            if(s[i] != 'R')ans++;
            if(s[i+1] != 'B')ans++;
            if(s[i+2] != 'G')ans++;
        }
    }
    else if(mx==gbr){
        for (int i = 0; i < n; i += 3) {
            if(s[i] != 'G')ans++;
            if(s[i+1] != 'B')ans++;
            if(s[i+2] != 'R')ans++;
        }
    }
    else if(mx==grb){
        for (int i = 0; i < n; i += 3) {
            if(s[i] != 'G')ans++;
            if(s[i+1] != 'R')ans++;
            if(s[i+2] != 'B')ans++;
        }
    }
    else if(mx==brg){
        for (int i = 0; i < n; i += 3) {
            if(s[i] != 'B')ans++;
            if(s[i+1] != 'R')ans++;
            if(s[i+2] != 'G')ans++;
        }
    }
    else if(mx==bgr){
        for (int i = 0; i < n; i += 3) {
            if(s[i] != 'B')ans++;
            if(s[i+1] != 'G')ans++;
            if(s[i+2] != 'R')ans++;
        }
    }
    cout << ans << endl;
    //debug(rgb,rbg,grb,gbr,brg,bgr,v);
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