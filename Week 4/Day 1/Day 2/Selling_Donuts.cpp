#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n, m; cin >> n >> m;
        int ar[n+1], arr[m+1];
        for (int i = 1; i <= n; i++) {
            cin >> ar[i];
        }
        for (int i = 1; i <= m; i++) {
            cin >> arr[i];
        }
        int c = 0;
        for (int i = 1; i <= m; i++) {
            if (arr[i] > 0 && arr[i] <= n && ar[arr[i]] > 0) {
                c++;
                ar[arr[i]]--;
            }
        }
        cout << m - c << endl;
    }
    return 0;
}