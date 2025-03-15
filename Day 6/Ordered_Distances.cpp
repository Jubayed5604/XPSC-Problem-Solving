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
    int n; cin >>  n;
    vi v(n), vv(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> vv[i];
    }
    for (int i = 0; i < n; i++) {
        vector<pair<int,int>>mp;
        for (int j = 0; j < n; j++) {
            mp.push_back({abs(v[i]-v[j]),v[j]});
        }
        sort(mp.begin(),mp.end(),[](const pair<int,int>&a, const pair<int,int>&b){
            if(a.first==b.first){
                return a.second < b.second;
            }
            else return a.first < b.first;
        });
        int c = 0, cnt = 0;
        for(auto i: mp){
            if(i.second==vv[c])cnt++;
            c++;
        }
        if(cnt==n){
            cout << i + 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
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