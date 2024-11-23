#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n; cin >> n;
        int c = 0;
        for(int i = 1; ; i += 2){
            if(c==n)break;
            cout << i << " ";
            c++;
        }
        cout << endl;
    }
    return 0;
}