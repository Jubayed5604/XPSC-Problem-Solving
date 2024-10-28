#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    map<pair<string,string>,int>m;
    for (int i = 0; i < n; i++) {
        string s1,s2; cin >> s1 >> s2;
        m[{s1,s2}]= 1;
    }
    cout << m.size() << endl;
    return 0;
}