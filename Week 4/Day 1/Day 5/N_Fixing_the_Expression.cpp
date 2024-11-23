#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int l, r; 
        char c; 
        cin >> l >> c >> r;
        if(l==r)cout << l << "=" << r << endl;
        else if(l > r)cout << l << ">" << r << endl;
        else cout << l << "<" << r << endl;
    }
    return 0;
}