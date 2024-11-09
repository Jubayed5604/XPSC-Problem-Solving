#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        ll x, y, z;
        cin >> x >> y >> z;
        ll s = (x + y + z);
        ll area = s * (s - 2 * x) * (s - 2 * y) * (s - 2 * z);
        ll up = area;
        ll down = 16 * s * s;
        up *= 4;
        ll g = gcd(up, down);
        up /= g;
        down /= g;
        cout << up << "/" << down << '\n';
    }
    return 0;
}