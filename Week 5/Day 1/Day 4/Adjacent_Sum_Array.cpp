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

        vector<int> ar(n - 1);
        for (int i = 0; i < n - 1; i++) {
            cin >> ar[i];
        }

        sort(ar.begin(), ar.end());

        int last = 1;
        cout << 1 << " ";
        for (int i = 0; i < n - 1; i++) {
            int current = ar[i] - last;
            cout << current << " ";
            last = current;
        }
        cout << endl;
    }
    return 0;
}
