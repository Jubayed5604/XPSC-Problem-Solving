#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    ll n, x;
    cin >> n >> x;
 
    ll ar[n];
    for (ll i = 0; i < n; i++) {
        cin >> ar[i];
    }
    ll left = 0, sum = 0, ans = 0;
    for (ll right = 0; right < n; right++) {
        sum += ar[right];
        while (sum > x && left <= right) {
            sum -= ar[left];
            left++;
        }
        ans += (right - left + 1);
    }
 
    cout << ans << endl;
    return 0;
}