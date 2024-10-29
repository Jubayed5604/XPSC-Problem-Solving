#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t;
    while (t--) { 
        int n, k; 
        cin >> n >> k;
        string s1, s2; 
        cin >> s1 >> s2;

        if (n == 1) {
            if (s1 == s2) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else if (s1 == s2 && k % 2 == 0) {
            cout << "YES" << endl;
        }
        else {
            if (count(s1.begin(), s1.end(), '1') != count(s2.begin(), s2.end(), '1') ||
                count(s1.begin(), s1.end(), '0') != count(s2.begin(), s2.end(), '0')) {
                cout << "NO" << endl;
                continue;
            }

            int c = 0;
            bool possible = false;

            for (int i = 0; i < n; i++) {
                if (s1[i] != s2[i]) {
                    for (int j = i + 1; j < n; j++) {
                        if (s1[j] == s2[i]) {
                            swap(s1[i], s1[j]);
                            c += j - i;
                            continue;
                        }
                    }
                    if(s1==s2)break;
                }
            }
            if (s1 == s2 && c == k) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}
