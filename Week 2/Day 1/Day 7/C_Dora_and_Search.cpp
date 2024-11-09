#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t;
    for(int test = 1; test <= t; test++){ 
        int n;
        cin >> n;
        int ar[n+1];
        
        for (int i = 1; i <= n; i++) {
            cin >> ar[i];
        }

        int mn = -1, mx = -1, mxindx = -1;
        for (int i = 1; i <= n; i++) {
            if (ar[i] != i){
                mn = i;
                break;
            }
        }
        for(int j = n; j >= mn; j--){
            if(ar[j] != j){
                mx = j;
                break;
            }
        }

        if (mn == -1 or mx != -1 or ar[mn] == mx or ar[mx] == mn) cout << -1 << endl;
        else cout << mn << " " << mx << endl;
    }

    return 0;
}
