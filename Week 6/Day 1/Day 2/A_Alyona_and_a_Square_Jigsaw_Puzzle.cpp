#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n; cin >> n;
        vector<int>v(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }
        int presum[n+1];
        presum[1] = v[1];
        for (int i = 2; i <= n; i++) {
            presum[i] = presum[i-1] + v[i];
        }
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            int bejor = sqrt(presum[i]);
            if(bejor % 2 and bejor * bejor == presum[i])ans++;
        }
        cout << ans << endl;
    }
    return 0;
}