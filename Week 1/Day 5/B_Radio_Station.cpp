#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin >> n >> m;
    map<string , string> mp;
    for (int i = 0; i < n; i++) {
        string s1, s2; cin >> s1 >> s2;
        mp[s2] = s1;
    }
    for (int i = 0; i < m; i++) {
        string s1, s2; cin >> s1 >> s2;
        s2.pop_back();
        cout << s1 << " " << s2 << "; #" << mp[s2] << endl;
    }
    return 0;
}