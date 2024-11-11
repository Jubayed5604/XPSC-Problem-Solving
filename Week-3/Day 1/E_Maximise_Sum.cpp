#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) { 
        int n;
        cin >> n;
        vector<int> v(n);
        ll sum = 0;
        int neg = 0;
        int mnabs = 1e6;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += abs(v[i]); 
            if (v[i] < 0) neg++;  
            mnabs = min(mnabs, abs(v[i]));
        }
        if (neg % 2 != 0) {
            sum -= 2 * mnabs;
        }
        cout << sum << endl;
    }
    
    return 0;
}
