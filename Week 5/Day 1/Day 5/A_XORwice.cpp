#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int a, b; cin >> a >> b;
        cout << (a ^ b) << endl;
    }
    return 0;
}