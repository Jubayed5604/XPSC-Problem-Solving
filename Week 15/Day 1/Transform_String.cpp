#include<bits/stdc++.h>
using namespace std;

void solve() {
    string a, b;
    cin >> a >> b;
    int j = b.size() - 1;
    vector<int> v;

    for (int i = a.size() - 1; i >= 0; i--) {
        if (a[i] == b[j]) {
            v.push_back(i);
            j--;
            if (j < 0) break;
        }
    }
    long long l = 5000050000;
    cout << l << endl;
    if (j >= 0) {
        cout << -1 << endl;
        return;
    }
    sort(v.begin(), v.end());
    long long ans = 0, paisi = 1;
    int c = 0;
    for (int i = 0; i < a.size(); i++) {
        if (i == v[c]) {
            paisi++;
            c++;
        } else {
            ans += paisi;
        }
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
