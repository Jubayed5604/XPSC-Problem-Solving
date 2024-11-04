#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n; cin >> n;
        if(n>1){
            n = n - 2;
            cout << n / 7 + 1 << endl;
        }
        else cout << 0 << endl;
    }
    return 0;
}