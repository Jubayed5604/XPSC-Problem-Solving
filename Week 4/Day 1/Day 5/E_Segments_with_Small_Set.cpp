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
    ll left = 0, right = 0, c = 0;
    map<int,int>mp;
    while(right < n){
        mp[ar[right]]++;
        if(mp[ar[right]]==1){
            c++;
        }
        if(c > x){
            mp[ar[left]]--;
            if(mp[ar[left]]==0){
                c--;
            }
            left++;
            right--;
            mp[right]--;
        }
        ans += right - left + 1;
        right++;
    }

    
    cout << ans << endl;
    return 0;
}