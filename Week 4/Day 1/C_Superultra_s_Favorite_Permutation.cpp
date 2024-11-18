#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is composite
bool isprime(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n < 5) {
            cout << -1 << endl;
            continue;
        }
        vector<int> e, o;
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                e.push_back(i);
            } else {
                o.push_back(i);
            }
        }
        vector<int> r;
        r.insert(r.end(), o.begin(), o.end());
        r.insert(r.end(), e.begin(), e.end());
        int j = n / 2 - !(n & 1);
        int u = j + 1;
        while (!isprime(r[j] + r[u]) && u < n) u++;
        if (j != n) {
            swap(r[j + 1], r[u]);
            for (auto &i : r) {
                cout << i << ' ';
            }
            cout << '\n';
        } else {
            cout << -1 << '\n';
        }
    }

    return 0;
}
