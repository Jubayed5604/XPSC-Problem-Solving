#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int a, b;
        cin >> a >> b;
        for(int i = min(a,b); ; i++){
            int f = i % a, ff = i % b;
            if(f == ff){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}