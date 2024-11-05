#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) { 
        int n, k;
        cin >> n >> k;
        map<int,vector<int>> v2;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            v2[v[i]].push_back(i);
        }
        while(k--) {
            int a, b;
            cin >> a >> b;
            if (!v2[a].empty() && !v2[b].empty() && v2[a][0] < v2[b].back()) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
