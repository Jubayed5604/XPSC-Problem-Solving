#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int a, b, n; cin >> a >> b >> n;
        int ar[n];
        ll res = b;
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
            res += min(a-1,ar[i]);
        }
        cout << res << endl;
        
    }
    return 0;
}