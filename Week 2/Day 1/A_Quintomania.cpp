#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) { 
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        bool ans = true;
        for(int i = 0; i < n - 1; i++) {
            if (!(abs(ar[i] - ar[i+1]) == 5 || abs(ar[i] - ar[i+1]) == 7)) {
                ans = false;
                break;
            }
        }
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
