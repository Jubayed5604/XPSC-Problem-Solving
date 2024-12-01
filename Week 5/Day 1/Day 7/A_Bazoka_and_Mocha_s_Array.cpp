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
        vector<int> ar(n);
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        bool rotated = false, valid = true;
        for (int i = 0; i < n; i++) {
            if (ar[i] > ar[(i + 1) % n]) {
                if (rotated) {
                    valid = false;
                    break;
                }
                rotated = true;
            }
        }
        cout << (valid ? "Yes" : "No") << endl;
    }
    return 0;
}
