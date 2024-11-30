#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n;cin >> n;
        cout << (n+1) / 2 << endl;
        int l = 1, r = n * 3;
        for(int i = 0; i < (n+1) / 2; i++){
            cout << l << " " << r << endl;
            l += 3, r -= 3;
        }
    }
    return 0;
}