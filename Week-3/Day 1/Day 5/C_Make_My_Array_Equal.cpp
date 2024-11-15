#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t; cin >> t;
    while(t--){ 
        ll n; cin >> n;
        ll ar[n];
        for (ll i = 0; i < n; i++) {
            cin >> ar[i];
        }
        sort(ar,ar+n);
        bool ans = false;
        if(n==1)ans = true;
        else if(n==2 and (ar[0] == ar[1] || ar[0] == 0 || ar[1] == 0))ans = true;
        else{
            ans = true;
            for (ll i = 0; i < n - 1; i++) {
                if(ar[i]==0)continue;
                if(ar[i]!=ar[i+1]){
                    ans = false;
                    break;
                }
            }
        }
        if(ans)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}