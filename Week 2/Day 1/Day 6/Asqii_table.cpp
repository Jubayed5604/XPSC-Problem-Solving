#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        char a, b; cin >> a >> b;
        int c1 = a - 32, c2 = b - 32;
        for (int i = 1; i <= 93; i++) {
            if ((c2 - c1) % i == 0) {
                cout << i << ' ' << ceil(double(94) / double(i)) << endl; 
            }
        }
        cout << endl;
    }
    return 0;
}