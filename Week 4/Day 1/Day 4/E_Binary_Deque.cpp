#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;

        vector<int> v(n + 1);
        int total_sum = 0;
        vector<int> idx(n + 1, 0);

        for (int i = 1; i <= n; ++i) {
            cin >> v[i];
            total_sum += v[i];
            if (v[i] == 1) idx[total_sum] = i;  // Store index for sum of 1s
        }

        if (total_sum < s) {
            cout << -1 << '\n';
            continue;
        }

        int i = 1, j = total_sum, remaining_sum = total_sum;
        int front_removals = 0, back_removals = 0;

        while (remaining_sum > s) {
            if (remaining_sum - 1 >= s) {
                if (idx[i]) {
                    ++front_removals;
                    remaining_sum -= 1;
                    ++i;
                } else if (idx[j]) {
                    ++back_removals;
                    remaining_sum -= 1;
                    --j;
                }
            } else {
                break;
            }
        }

        cout << front_removals + back_removals << '\n';
    }

    return 0;
}
