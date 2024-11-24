#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n; cin >> n;
        string a, b, c; cin >> a >> b >> c;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if(c[i]!=a[i] && c[i]!=b[i])ans = true, i = n;
        }
        if(ans)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}