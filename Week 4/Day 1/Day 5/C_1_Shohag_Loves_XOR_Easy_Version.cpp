#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int t;
    cin >> t;
    while (t--) {
        int x, m;
        cin >> x >> m;
 
        int ans = 0;
        for (int i = 1; i <= min(1048576, m); i++) {
            int xorResult = x ^ i;
            if (xorResult != 0 && (x % xorResult == 0 || i % xorResult == 0)) {
                ans++;
            }
        }
        cout << ans << endl;
    }
 
    return 0;
}