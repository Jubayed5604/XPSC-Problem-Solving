#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m; 
    cin >> n >> m;
    vector<int> a(n), b(m);
    map<int, int> m1, m2;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m1[a[i]]++;
    }
    
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        m2[b[i]]++;
    }
    
    int ans = 0;
    for (auto i : m2) {
        if (m1.count(i.first)) {
            ans += m1[i.first] * i.second;
        }
    }
    
    cout << ans << endl;
    return 0;
}
