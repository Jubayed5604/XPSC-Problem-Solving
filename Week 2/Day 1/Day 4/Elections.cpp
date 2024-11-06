#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n, x; cin >> n >> x;
        int a[n],b[n], sumA = 0, sumB = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sumA += a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            sumB += b[i];
        }
        int c = 0;
        vector<int>v;
        for (int i = 0; i < n; i++) {
            if(b[i] >= a[i]){
                int dif = b[i] - a[i] + 1;
                v.push_back(dif);
            }
            else c++;
        }
        sort(v.begin(),v.end());
        for(auto i: v){
            if(x>=i){
                c++;
                x = x - i;
            }
        }
        if(c > n/2)cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}