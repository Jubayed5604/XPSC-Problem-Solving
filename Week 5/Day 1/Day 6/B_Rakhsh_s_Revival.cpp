#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--){ 
        int n, m, k; cin >> n >> m >> k;
        string s; cin >> s;
        int c = 0, ans = 0, zero = 0;
        for (int i = 0; i < n; i++) {
            if(s[i]=='0'){
                zero++;
            }
            else {
                zero = 0;
            }
            if(zero >= m)ans++, zero = 0, i+=k-1;
        }
        cout << ans << endl;
    }
    return 0;
}