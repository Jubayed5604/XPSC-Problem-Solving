#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    ll n, x; 
    cin >> n >> x;
 
    ll ar[n];
    ll sum = 0, ss = 0;
    for (ll i = 0; i < n; i++) {
        cin >> ar[i];
        ss += ar[i];
    }
    if(ss < x)cout << -1 << endl;
    else {
        ll ans = 9 * 1e9;
            ll left = 0, right = 0, c = 0;
            while(right < n and left < n){
                sum += ar[right];
                while(sum >= x){
                    ans = min(ans,right + 1 - left);
                    sum -= ar[left];
                    left++;
                }
                right++;
            }
            if(ans == 9 * 1e9)cout << n << endl;
            else cout << endl << ans << endl;
    }
    return 0;
}