#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n; cin >> n;
        int ar[n];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
            sum += ar[i];
        }
        if(sum+100 < (n+1) * 50)cout << -1 << endl;
        else {
            if(sum >= (n+1) * 50)cout << 0 << endl;
            else cout << (n+1) * 50 - sum << endl;
        }
    }
    return 0;
}