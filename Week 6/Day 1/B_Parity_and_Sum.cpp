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
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
            if(ar[i] & 1)odd++;
            else even++;
        }
        sort(ar,ar+n);
        if(odd ==n or n == even)cout << 0 << endl;
        //else if(odd > even)
    }
    return 0;
}