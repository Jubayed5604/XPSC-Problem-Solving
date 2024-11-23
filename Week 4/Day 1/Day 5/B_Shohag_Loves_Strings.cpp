#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int l = 0, r = 0;
        map<int, int> freq;
        bool ans = false;
        while (r < s.size() and !ans) {
            freq[s[r]]++;
            if(freq.size()==1){
                if(r >= 3){
                    ans = true;
                }
            }
            if(freq.size()==2){
                if(r >= 2 and r % 2 != 0)ans = true;
            }
            if(freq.size() > 2){
                if((freq.size() + r+1) % 2==0)ans = true;
            }
            r++;
        }
        r--;
        if(ans){
            for (int i = 0; i <= r; i++) {
                cout << s[i];
            }
            cout << endl;
        }
        else cout << -1 << endl;
    }
    return 0;
}
