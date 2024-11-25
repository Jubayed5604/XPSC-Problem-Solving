#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n, m; cin >> n >> m;
        string s1, s2; cin >> s1 >> s2;
        vector<int>v[n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m ; j++){
                if(min(abs(s1[i]-s2[j]),abs(s2[j]-s1[i])) > 5)v[i].push_back(10-min(abs(s1[i]-s2[j]),abs(s2[j]-s1[i])));
                else v[i].push_back(min(abs(s1[i]-s2[j]),abs(s2[j]-s1[i])));
            }
        }
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < m; j++) {
        //         cout << v[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        int ans = 0, res = 1e9;
        for(int i = 0; i < n - m + 1; i++){
            int j = 0;
            ans = 0;
            while(j < m){
                ans += v[i+j][j];
                j++;
            }
            res = min(res,ans);
        }
        cout << res << endl;
    }
    return 0;
}