#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n, x, y; cin >> n >> x >> y;
        int ar[n];
        int ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
            if(ar[i] * x > y)ans += y;
            else ans += ar[i] * x;
        }
        // sort(ar,ar+n);
        // if(((ar[n-1]) * x) > y)ans -= ar[n-1] * x, ans += y;
        cout << ans << endl;
        
    }
    return 0;
}