#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n; cin >> n;
        string s; cin >> s;
        if(n != 5)cout << "NO" << endl;
        else {
            map<char,int>mp;
            for (int i = 0; i < n; i++) {
                mp[s[i]]++;
            }
            if(mp['T'] and mp['i'] and mp['m'] and mp['u'] and mp['r'])cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}