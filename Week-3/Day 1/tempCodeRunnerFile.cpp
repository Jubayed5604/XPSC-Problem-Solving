#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n; cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        sort(ar,ar+n);
        int ans = 1e9;
        for (int i = 0; i < n/2; i++) {
            ans = min(ans,ar[i],ar[n-1-i]);
        }
        cout << ans << endl;
    }
    return 0;
}