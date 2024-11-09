#include <iostream>
#include <vector>
#include <iomanip>
typedef long long ll;
using namespace std;

const int MOD = 998244353;

int main() {
    int N;
    cin >> N;

    vector<long long> red(N), green(N);
    vector<long long> expectedWeight(N);

    for (int i = 0; i < N; ++i) {
        cin >> red[i];
    }

    for (int i = 0; i < N; ++i) {
        cin >> green[i];
    }

    // Calculate the expected weight for each box (average of red[i] and green[i])
    for (int i = 0; i < N; ++i) {
        expectedWeight[i] = (red[i] + green[i]) * ll(998244353) % MOD;
    }
    vector<long long> dp(N + 1, 0);
    dp[0] = 1;
    for (int i = 0; i < N; ++i) {
        for (int k = i + 1; k >= 1; --k) {
            dp[k] = (dp[k] + dp[k - 1] * expectedWeight[i]) % MOD;
        }
    }

    // Output the result for exactly k apples for k in [1, N]
    for (int k = 1; k <= N; ++k) {
        cout << dp[k] << " ";
    }
    cout << endl;

    return 0;
}
