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
bool dpp[100001][100];

string toBinary(int num, int n) {
    string binary = "";
    while (num > 0) {
        binary = char('0' + (num % 2)) + binary;
        num /= 2;
    }
    while (binary.size() < n) binary = '0' + binary;
    return binary;
}

void solve() {
    string s;
    cin >> s;
    int three = 0, two = 0, total = 0;
    vi v;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '2') two++;
        if (s[i] == '3') three++;
        total += s[i] - '0';
        if (s[i] == '3' || s[i] == '2') v.push_back(pow(s[i] - '0', 2) - (s[i] - '0'));
    }
    if (total % 9 == 0) {
        cout << "YES" << endl;
    } else {
        int baki = total % 9, rem;
        for(ll i = 0; i <= two; i++){
            for(ll j = 0; j <= three; j++){
                rem = (baki + (i*2) + (j*6)) % 9;
                if(rem % 9 == 0){
                    cout<<"YES\n";
                    return;
                }
            }
        }cout << "NO" << endl;
    }
}

int main() {
    fast_io();
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    return 0;
}
