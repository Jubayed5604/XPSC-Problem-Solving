#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    
    ll n, x; 
    cin >> n >> x;
 
    ll ar[n];
    for (ll i = 0; i < n; i++) {
        cin >> ar[i];
    }
    int l = 0, r= 0;
    ll ans = 0;
    multiset<int>ml;
    while( r < n){
        ml.insert(ar[r]);
        int mn = *ml.begin(), mx = *ml.rbegin();
        if(mx - mn <= x){
            ans +=(r - l + 1);
        }
        else{
            while(l <= r){
                mn = *ml.begin(), mx = *ml.rbegin();
                if(mx - mn <= x){
                    break;
                }
                ml.erase(ml.find(ar[l]));
                l++;
            }
            mn = *ml.begin(), mx = *ml.rbegin();
            if(mx - mn <= x){
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout << ans << endl;
return 0;
}