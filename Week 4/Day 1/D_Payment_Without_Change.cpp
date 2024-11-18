#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t; cin >> t;
    while(t--){ 
        ll a, b, n, s; cin >> a >> b >> n >> s;
        
        ll ss = s - (n * a);
        if(ss >= 0){
            if(b>=ss)cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else {
            s = s % n;
            if(s <= b)cout << "YES" << endl;
            else cout << "NO" << endl; 
        }
    }
    return 0;
}