#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n, k; cin >> n >> k;
        for(int i = n - k; i <= n; i++)cout << i << " ";
        for(int j = n - k - 1; j >= 1; j--)cout << j << " ";
        cout << endl;
    }
    return 0;
}