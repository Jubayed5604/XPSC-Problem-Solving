#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t;
    while(t--) { 
        int n; 
        cin >> n; 
        int ar[n];
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        vector<int> v;
        for (int i = 1; i * i <= n - 2; i++) {
            if ((n - 2) % i == 0) {
                v.push_back(i);
                if (i != (n - 2) / i) {
                    v.push_back((n - 2) / i);
                }
            }
        }
        sort(ar, ar + n);
        sort(v.begin(), v.end());
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[ar[i]]++;
        }
        bool found = false;
        for (int i = 0; i < v.size(); i++) {
            int x = v[i];
            if (mp[x] > 0) {
                int y = v[v.size() - 1 - i];
                if (x == y && mp[x] > 1) {
                    cout << x << " " << y << endl;
                    found = true;
                    break;
                } else if (x != y && mp[y] > 0) {
                    cout << x << " " << y << endl;
                    found = true;
                    break;
                }
            }
        }
    }
    return 0;
}
