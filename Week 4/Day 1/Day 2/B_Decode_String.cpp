#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while (t--) { 
        int n; 
        cin >> n;
        string s; 
        cin >> s;
        string result = "";
        for (int i = n - 1; i >= 0; ) {
            if (s[i] == '0') {
               
                int num = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
                result += char('a' + num - 1);
                i -= 3;
            } else {
                int num = s[i] - '0';
                result += char('a' + num - 1);
                i--;
            }
        }
        reverse(result.begin(),result.end());
        cout << result << endl;
    }
    return 0;
}
