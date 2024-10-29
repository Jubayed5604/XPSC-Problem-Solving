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
        int ar[n];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
            sum += ar[i];
        }
        if (sum % 2 == 0) {
            cout << n << endl;
            continue;
        }
        int first = -1, last = -1;
        for (int i = 0; i < n; i++) {
            if (ar[i] % 2 == 1) {
                first = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            if (ar[i] % 2 == 1) {
                last = i;
                break;
            }
        }
        int ans = n - min(first + 1, n - last);
        cout << ans << endl;
    }
    return 0;
}
