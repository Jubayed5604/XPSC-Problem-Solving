#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    for(int i = 1; i <= t; i++){ 
        int n, k; cin >> n >> k;
        int ans;
        if(n==1){
            ans = 1;
        }
        else{
            if(n % 4==0){
                if((n/2) % 4 == 0){
                    ans = 2;
                }
                else {
                    ans = k;
                }
            }
            else {
                if((n/2) % 4 == 0){
                    ans = 1;
                }
                else ans = k;
            }
        }
        if(ans==1)cout << "Case " << i << ": Evenius" << endl;
        else cout << "Case " << i << ": Oddius" << endl;
    }
    return 0;
}