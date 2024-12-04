#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n, k; cin >> n >> k;
        if((n+1)/2 == k or n/2 == k)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}