#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x, sum = 0;
        cin >> n >> x;
        if (x % 2 == 0)
        {
            for (int i = 2; i < n - 1; i += 2)
            {
                    sum++;
            }
            cout << sum << endl;
        }
        else
        {
            for (int i = 1; i < n - 1; i += 2)
            {
                if ((x + i) % 2 == 0)
                    sum++;
            }
            cout << sum << endl;
        }
    }
    return 0;
}