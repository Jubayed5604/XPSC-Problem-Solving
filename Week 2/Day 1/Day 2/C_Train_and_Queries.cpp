#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n, k; cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        for(int z = 0; z < k; z++) {
            int a, b; cin >> a >> b;
            bool ans = false, ans2 = false;

            for(int i = 0; i < n; i++) {
                if(v[i] == a) {
                    ans = true;
                }
                if(ans && v[i] == b) {
                    ans2 = true;
                    break;
                }
            }
            if(ans2) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
