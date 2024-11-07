#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) { 
        int n; cin >> n;
        string s1, s2; cin >> s1 >> s2;
        int f = 1;
        for (int i = 0; i < n; i++) {
            if(s1[i] == s2[i]) continue;
            else {
                if((s1[i] == 'R' && s2[i] != 'R') || (s1[i] != 'R' && s2[i] == 'R')) {
                    cout << "NO" << endl;
                    f = 0;
                    break;
                }
            }
        }
        if(f) cout << "YES" << endl;
    }
    return 0;
}
