#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    set<pair<int, int>> s;  // stores elements as (id, value) sorted by insertion order (id)
    set<pair<int, int>> ms; // stores elements as (value, -id) sorted by value descending, then by id
    vector<int> v;
    int c = 1;

    while (t--) {
        int n;
        cin >> n;

        if (n == 1) {
            int m;
            cin >> m;
            s.insert({c, m});
            ms.insert({m, -c});
            c++;
        }
        else if (n == 2) {
            if (!s.empty()) {
                v.push_back(s.begin()->first);
                ms.erase({s.begin()->second, -s.begin()->first});
                s.erase(s.begin());
            }
        }
        else {
            if (!ms.empty()) {
                v.push_back(-ms.rbegin()->second);
                s.erase({-ms.rbegin()->second, ms.rbegin()->first});
                ms.erase(prev(ms.end()));
            }
        }
    }

    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
