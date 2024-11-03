#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmt(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) {
        return a.second > b.second;
    }
    return a.first < b.first;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t;
    while (t--) { 
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> v;
        ll sum = 0;

        for (int i = 0; i < k; i++) {
            int a, b; 
            cin >> a >> b;
            sum += b;
            v.push_back({a, b});
        }

        sort(v.begin(), v.end(), cmt);

        if (n >= k) {
            cout << sum << endl;
        } else {
            set<int> selected_brands;
            sum = 0;
            int c = 0;

            for (auto &i : v) {
                if (selected_brands.find(i.first) == selected_brands.end()) {
                    sum += i.second;
                    selected_brands.insert(i.first);
                    c++;
                }
                if (c == n) break;
            }
            cout << sum << endl;
        }
    }
    return 0;
}