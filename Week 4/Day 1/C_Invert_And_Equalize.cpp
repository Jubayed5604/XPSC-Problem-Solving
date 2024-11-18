#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n; cin >> n;
        string s; cin >> s;

        int even, odd;
        if(s[0]=='0')even = 1, odd = 0;
        else even = 0, odd = 1;
        for(int i = 1; i < n; i++){
            if(s[i]=='1'){
                if(s[i] != s[i-1])odd++;
            }
            else {
                if(s[i] != s[i-1])even++;
            }
        }
        cout << min(even,odd) << endl;
    }
    return 0;
}