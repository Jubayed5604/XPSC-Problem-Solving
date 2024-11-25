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
        bool ans = false;
        int res;
        vector<int>dif;
        for (int i = 0; i < n; i++) {
            if(ar[i] >= k){
                dif.push_back(ar[i] % k);
            }
        }
        sort(dif.begin(),dif.end());
        if(dif.size())cout << dif[0] << endl;
        else cout << -1 << endl;
    }
    return 0;
}