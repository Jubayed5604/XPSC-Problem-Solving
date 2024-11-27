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
        vector<int> v(n + 1, -1);

        for (int i = 1; i <= n; i++) {
            bool ans = false;
            for (int j = 1; j <= n; j++) {
                if (v[j] == -1 && (j % k) != (i % k)) {
                    v[j] = i;
                    ans = true;
                    break;
                }
            }
        }

        int c = 0;
        for(int i = 1; i <= n; i++){
            if(v[i] != -1)c++;
        }
        if(c==n){
            for(int i = 1; i <= n; i++)cout << v[i] << " ";
            cout << endl;
        }
        else cout << -1 << endl;
    }

    return 0;
}



