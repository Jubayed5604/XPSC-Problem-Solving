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
        int cnt = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if(v[i] > 0)sum += v[i];
            if(v[i] < 0){
                v[i] = 0;
            }
        }
        int i = 0;
        int sum1 = sum, cnt1 = 0;
        while(sum1){
            if(v[i]==0)cnt1++;
            else sum1 -= v[i];
            i++;
        }
        cout << cnt1 << endl;

    }
    return 0;
}