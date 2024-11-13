#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n, m; cin >> n >> m;
        string s1, s2; cin >> s1 >> s2;
        string s, t;
        for (int i = 0; i < n; i++) {
            if(s1[i] == 'b') s += 'b';
        }
        for (int i = 0; i < m; i++) {
            if(s2[i] == 'b') t += 'b';
        }
        if(s != t) {
            cout << "No" << endl;
            continue;
        }
        int cs1 = count(s1.begin(), s1.end(), 'a');
        int cs2 = count(s2.begin(), s2.end(), 'a');
        if(cs1 <= cs2) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
