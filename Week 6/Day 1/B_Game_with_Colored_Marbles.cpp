#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n; cin >> n;
        vector<int>v(n);
        map<int,int>sobar;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sobar[v[i]]++;
        }
        int ans = 0;
        int c = 0;
        for(auto [x,y]: sobar) {
            if(y==1)c++;
        }
        cout << 2*((c+1)/2) + sobar.size() - c << endl;
    }
    return 0;
}