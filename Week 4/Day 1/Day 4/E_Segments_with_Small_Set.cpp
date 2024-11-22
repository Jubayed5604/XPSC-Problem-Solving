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
    ll left = 0, right = 0;
    map<int,bool>mp;
    while(right < n){
        if(!mp[ar[right]]){
            mp[ar[right]] = true;
            if(right - left >= x){
                ans += (right - left) - x + 1;
            }
            right++;
        }
        else{
            mp[ar[left]] = false;
            ans += (right - left) - x + 1;
            left++;
        }
        
    }
    cout << ans << endl;
    return 0;
}