
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
 
    ll left = 0, sum = 0, c = 0;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        if(ar[i] <= x){
            sum += ar[i];
            if(sum > x){
                c++;
                sum = 0;
                i--;
            }
        }
    }
    if(sum > 0)cout << c + 1 << endl;
    else cout << -1 << endl;
    return 0;
}