#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    
    int n, p1, p2, p3, t1, t2;
    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
    int ans = 0, temp1, temp2;
    vector<pair<int,int>>v;
    for(int i = 0 ; i < n; i++){
        int l, r; cin >> l >> r;
        ans += (r-l) * p1;
        v.push_back({l,r});
    }
    //cout << ans << endl;
    for(int i = 1; i < v.size(); i++){
        if(v[i-1].second + t1 + t2 <= v[i].first){
            ans += (t1 * p1) + (t2 * p2) + (v[i].first - v[i-1].second - t1 - t2) * p3;
        }
        else if(v[i-1].second + t1 <= v[i].first){
            ans += (t1 * p1);
            v[i-1].second = v[i-1].second + t1;
            ans += (v[i].first - v[i-1].second) * p2;
        }
        else {
            ans += (v[i].first - v[i-1].second) * p1;
        }
    }
    cout << ans << endl;
return 0;
}