#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--){ 
        int n; cin >> n;
        vector<int>x(n);
        vector<int>y(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> y[i];
        }
        bool ans = false;
        int c = n-1, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
        for (int i = 0; i < n; i++) {
            if(x[i]==y[i])cnt1++;
            if(x[i]==y[c])cnt2++;
            if(x[c]==y[i])cnt3++;
            if(x[c]==y[c])cnt4++;
            c--;
        }
        if(cnt1==n || cnt2==n || cnt3==n || cnt4==n)cout << "Bob" << endl;
        else cout << "Alice" << endl;
    }
    return 0;
}