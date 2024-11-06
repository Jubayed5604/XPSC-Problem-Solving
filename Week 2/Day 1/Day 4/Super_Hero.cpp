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
        int i = 0;
        int hn = log2(n*k);
        int high = pow(2,hn);
        while(true){
            if(high % n == 0){
                cout << log2(high) << endl;
                break;
            }
            if(high==1){
                cout << 0 << endl;
                break;
            }
            else high /= 2;
        }
        
    }
    return 0;
}
