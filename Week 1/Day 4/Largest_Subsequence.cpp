#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t;
    while(t--) { 
        int n; 
        cin >> n;
        string s; 
        cin >> s;
        
        int ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++){
                if(s[i]=='a' and s[j]=='b')ans++;
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}
