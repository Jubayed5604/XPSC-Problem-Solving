#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n, k; cin >> n >> k;
        int tk = k;
        string s; cin >> s;
        map<char,int>mp;
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
        }
        int f = 1, c = 0, sum = 0;
        int odd = 0;
        for(auto i: mp){
            if(i.second % 2!=0)odd++;
        }
        if(odd > k + 1)cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}