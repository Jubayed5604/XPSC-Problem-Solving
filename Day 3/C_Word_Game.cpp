#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n; cin >> n;
        vector<string>v[3];
        for(int j = 0; j < 3; j++){
            for (int i = 0; i < n; i++) {
                string s; cin >> s;
                v[j].push_back(s);
            }
        }
        sort(v[0].begin(),v[0].end());
        sort(v[1].begin(),v[1].end());
        sort(v[2].begin(),v[2].end());
        for(auto i:v[0])cout << i << " ";
        cout << endl;
    }
    return 0;
}