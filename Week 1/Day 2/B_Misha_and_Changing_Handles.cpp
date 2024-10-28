#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<pair<string, string>> v;

    for (int i = 0; i < n; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        int f = 0;
        for (int j = 0; j < v.size(); j++) {
            if (v[j].second == s1) {
                v[j].second = s2;
                f = 1;
            }
        }
        if(f==0)v.push_back({s1, s2});
    }
    cout << v.size() << endl;
    for(auto i: v){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}
