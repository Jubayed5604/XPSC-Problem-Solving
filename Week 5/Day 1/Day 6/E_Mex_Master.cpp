#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n; cin >> n;
        int ar[n];
        int zero = 0, others = 0;
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
            if(ar[i]==0)zero++;
            else if(ar[i] > 1) others++;
        }
        if(zero<=(n+1)/2) cout<<0;
		else if(others || zero==n) cout<<1;
		else cout<<2;
		cout<<endl;

    }
    return 0;
}