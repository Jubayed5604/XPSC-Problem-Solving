#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n; cin >> n;
        if(n % 2 == 0){
            if((n / 2) % 2 == 0)cout << 1 << endl;
            else cout << 0 << endl;
        }
        else cout << -1 << endl;
    }
    return 0;
}