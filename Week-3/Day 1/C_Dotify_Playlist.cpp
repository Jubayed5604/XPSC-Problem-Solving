#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) { 
        int n, k, l; cin >> n >> k >> l;
        vector<int> v;
        while(n--) {
            int mi, li; cin >> mi >> li;
            if(li == l) v.push_back(mi);
        }
        sort(v.begin(), v.end(), greater<int>());
        if(v.size() < k) {
            cout << -1 << endl;
        } else {
            int ans = 0;
            for(int i = 0; i < k; i++) {
                ans += v[i];
            }
            cout << ans << endl;
        }
    }
    return 0;
}
