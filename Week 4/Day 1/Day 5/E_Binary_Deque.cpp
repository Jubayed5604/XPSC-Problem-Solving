#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for (int z = 1; z <= t; z++) {
        int n, s;
        cin >> n >> s;
        vector<int> v(n + 1);
        int sum = 0;
        vector<int> idx(n + 1, -1);

        for (int i = 1; i <= n; i++) {
            cin >> v[i];
            if (v[i] == 1) {
                sum++;
                idx[sum] = i;
            }
        }

        if (sum < s) {
            cout << -1 << endl;
        } else {
            int left = 1, right = sum, lasti = 1, lastj = n, ans = 0;
            while (sum > s) {
                int fast = idx[left] - lasti;
                int last = lastj - idx[right];

                if (fast > last) {
                    ans += last + 1;
                    lastj = idx[right] - 1;
                    right--;
                } else {
                    ans += fast + 1;
                    lasti = idx[left] + 1;
                    left++;
                }
                while (left <= sum && idx[left] == -1) left++;
                while (right > 0 && idx[right] == -1) right--;
                sum--;
            }
            cout << ans << endl;
        }
    }
    return 0;
}
