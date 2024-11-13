#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int l = 0, r = 0, cnt = 0;
    long long ans = 0;
    while ( l < n and r < m) {
        int cur = a[l], cnt1 = 0, cnt2 = 0;
        while(l < n and a[l] == cur){
            cnt1++, l++;
        }
        while(r < m and cur > b[r])r++;
        while(r < m and b[r]==cur){
            cnt2++, r++;
        }
        ans += (1ll * cnt1 * cnt2);
    }
    cout << ans << endl;

    return 0;
}
