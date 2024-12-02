#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n, k; cin >> n >> k;
        vector<int>ar(n);
        int s = 0;
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
            s += ar[i];
        }
        if(s < k)cout << k - s << endl;
        else {
            sort(ar.begin(),ar.end(),greater<int>());
            int sum = 0, ans, last;
            for (int i = 0; i < n; i++) {
                sum += ar[i];
                if(sum > k){
                    ans = k - (sum - ar[i]);
                    break;
                }
                if(sum==k){
                    ans = 0;
                    break;
                }
            }
            if(sum >= k)
            cout << ans << endl;
            else cout << k - ans << endl;
        }
    }
    return 0;
}