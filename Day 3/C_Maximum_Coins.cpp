#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n, x; cin >> n >> x;
        int ans1 = 1, ans2 = 1;
        for(int i = 1; i <= n; i++){
            if(i<=n-x){
                ans1 += round(pow(2,i));
            }
            else ans2 += round(pow(2,i));
        }
        cout << ans2 - ans1 << endl;
    }
    return 0;
}