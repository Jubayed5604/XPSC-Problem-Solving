#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n, k, p; cin >> n >> k >> p;

        int ar[n];
        int mx = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
            sum += ar[i];
            mx = max(mx,ar[i]);
        }
        if(k + mx > sum - mx + p)cout << "Ved" << endl;
        else if(k + mx < sum - mx + p)cout << "Varun" << endl;
        else cout << "Equal" << endl;

    }
    
    return 0;
}