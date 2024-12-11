#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n; cin >> n; 
        string s1, s2;
        cin >> s1 >> s2;
        int one = 0, zero = 0;
        for (int i = 0; i < n; i++) {
            if(s1[i]=='1')one++;
            if(s2[i]=='1')one++;
            if(s1[i]=='0')zero++;
            if(s2[i]=='0')zero++;
        }
        if(one % 2 == 0 and zero % 2==0)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}