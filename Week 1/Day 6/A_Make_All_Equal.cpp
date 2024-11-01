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
        for(auto &i: v)cin >> i;
        map<int,int>m;
        int mx = 0;
        for(auto i: v){
            m[i]++;
        }
        for(auto i: m){
            mx = max(mx,i.second);
        }
        cout << n-mx << endl;
        
    }
    return 0;
}