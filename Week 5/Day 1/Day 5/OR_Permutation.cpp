#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n; cin >> n;
        // cout << (n | (1<<4)) << "\n";

        // cout << (n & (~(1<<3))) << "\n";

        // cout << (n ^ (1<<4)) << "\n";
        // cout << endl;
        for(int i = n; i >= 1; i--)cout << i << " ";
        cout << endl;

    }
    return 0;
}