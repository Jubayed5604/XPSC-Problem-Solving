#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n; cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        int ans;
        bool ans2 = false;
        for (int i = 0; i < n; i++) {
            map<int,int>mp;
            for(int j = 0; j < n; j++){
                if(i != j){
                    mp[abs(ar[j]-ar[i])]++;
                    ans = abs(ar[j]-ar[i]);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}