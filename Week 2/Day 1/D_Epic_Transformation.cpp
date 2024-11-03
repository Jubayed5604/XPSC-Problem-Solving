#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t;
    while (t--) { 
        int n;
        cin >> n;

        map<int, int> freq;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            freq[a]++;
        }

        int maxFreq = 0;
        for (const auto &entry : freq) {
            maxFreq = max(maxFreq, entry.second);
        }

        int minSize = max(2 * maxFreq - n, n % 2);

        cout << minSize << endl;
    }

    return 0;
}
