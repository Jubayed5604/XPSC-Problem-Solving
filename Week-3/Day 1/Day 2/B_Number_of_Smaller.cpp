#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n), v2(m);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> v2[i];
    }

    int l = 0, r = 0, cnt = 0;
    vector<int> ans;

    while (r < m) {
        while (l < n && v[l] < v2[r]) {
            cnt++;
            l++;
        }
        ans.push_back(cnt);
        r++;
    }

    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
