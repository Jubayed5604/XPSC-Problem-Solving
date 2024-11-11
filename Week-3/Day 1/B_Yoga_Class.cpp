#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n;
        float  x, y; cin >> n >> x >> y;
        float mx = max(x,y/2);
        cout << mx * (n/2) * 2 + x * (n % 2) << endl;
    }
    return 0;
}