#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int ar[n+1];
    int dp[n+1] = {0};
    unordered_set<int> s;
    
    for (int i = 1; i <= n; i++) {
        cin >> ar[i];
    }
    for (int i = n; i >= 1; i--) {
        s.insert(ar[i]);
        dp[i] = s.size();
    }

    while (m--) {
        int l;
        cin >> l;
        cout << dp[l] << endl;
    }

    return 0;
}
