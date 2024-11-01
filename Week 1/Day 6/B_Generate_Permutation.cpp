#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 == 0) {
            cout << -1 << endl;
        } else {
            vector<int> p(n);
            int left = 1, right = n;
            for (int i = 0; i < n; i++) {
                if (i % 2 == 0) {
                    p[i] = right--;
                } else {
                    p[i] = left++;
                }
            }
            for (int i = 0; i < n; ++i) {
                cout << p[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}