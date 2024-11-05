#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 100000;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int dp[N];
        for(int i = 0; i <= N; ++i)dp[i] = 0;
        int n,k;
        cin >> n >> k;
        vector<int>m;
        for(int i = 0; i < k; ++i){
            int a,b;
            cin >> a >> b;
            dp[a] += b;
        }

        sort(dp,dp+N);
        reverse(dp,dp+N);
        int sum = 0;
        for(int i = 0; i < n; ++i) sum += dp[i];
        cout << dp << '\n';

        


    }
    return 0;
}