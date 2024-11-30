#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n; cin >> n;
        string s; cin >> s;
        string s2 = s;
        reverse(s2.rbegin(),s2.rend());
        cout << min(s,s2 + s) << endl;
    }
    return 0;
}