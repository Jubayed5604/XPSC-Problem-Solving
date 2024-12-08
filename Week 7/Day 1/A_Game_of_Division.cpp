#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n, k; cin >> n >> k;
        int ar[n];
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        int ans = -1;
        for (int i = 0; i < n; i++) {
            int c = 0;
            for(int j = 0; j < n; j++){
                if(abs(ar[i]-ar[j]) % k != 0 and i != j)c++;
                //if( i != j )cout << abs(ar[i]-ar[j]) << " ";
            }
            //cout << endl;
            if(c==n-1){
                ans = i + 1;
                break;
            }
        }
        if(ans != -1)cout << "YES\n" << ans << endl;
        else cout << "NO" << endl;
    }
    return 0;
}