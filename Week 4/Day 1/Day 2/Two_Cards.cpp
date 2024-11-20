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
        vector<int> v1(n), v2(n);

        for (int i = 0; i < n; i++) {
            cin >> v1[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> v2[i];
        }

        map<int, pair<int, int>, greater<int>> mp;
        map<int, int, greater<int>> m;

        for (int i = 0; i < n; i++) {
            mp[v1[i] + v2[i]] = {v1[i], v2[i]};
            m[v1[i]] = v2[i];
        }

        int c = 0, alice = 0, bob = 0;
        if (n % 2 == 0) c = 0;
        else c = 1;

        while (!mp.empty() || !m.empty()) {
            if (c % 2 == 0) {
                auto it = mp.begin();
                alice += it->first;
                int v1_value = it->second.first;
                mp.erase(it);
                m.erase(v1_value);
            } else {
                auto it2 = m.begin();
                bob += it2->first + it2->second;
                m.erase(it2);
                mp.erase(it2->first + it2->second);
            }
            c++;
        }

        if (alice > bob) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
