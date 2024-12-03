#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<ll>> ar(2, vector<ll>(n));
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < n; j++) {
                cin >> ar[i][j];
            }
        }

        vector<ll> prefixSum(n + 1, 0), suffixSum(n + 1, 0);

        for (int i = n - 1; i >= 0; i--) {
            suffixSum[i] = suffixSum[i + 1] + ar[0][i];
        }

        ll minCost = LLONG_MAX;
        ll currSum = 0;

        for (int i = 0; i < n; i++) {
            ll topPath = suffixSum[i + 1];
            ll bottomPath = currSum;
            minCost = min(minCost, max(topPath, bottomPath));
            currSum += ar[1][i];
        }

        cout << minCost << endl;
    }

    return 0;
}
