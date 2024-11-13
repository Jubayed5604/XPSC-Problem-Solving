#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n, k; cin >> n >> k;
        int mn =  n * 10;
        int mx = n * 12;
        if(k >= mn and k <= mx)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}