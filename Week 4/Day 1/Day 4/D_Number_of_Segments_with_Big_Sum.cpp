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
    }
    ll ans = 0;
    ll left = 0, right = 0, c = 0, baki;
    bool f;
    while(right < n and left < n){
        sum += ar[right];
        while(sum >= x){
            ans += n - right;
            sum -= ar[left];
            left++;
        }
        if(sum < x)right++;
    }
    cout << ans << endl;
    return 0;
}