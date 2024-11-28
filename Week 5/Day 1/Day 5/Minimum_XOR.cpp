#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n;cin >> n;
        int ar[n];
        int xr = 0;
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
            xr = xr ^ ar[i]; 
        }
        //cout << (4^4) << endl;
        //cout << xr << endl;
        int ans = xr;
        for (int i = 0; i < n; i++) {
            ans = min(ans,xr^ar[i]);
        }
        cout << ans << endl;

    }
    return 0;
}