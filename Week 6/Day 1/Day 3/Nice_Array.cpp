#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t;
    while (t--) { 
        ll n, k; 
        cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        ll sfloor=0,sceil=0;
        for(int i=0;i<n;i++){
            ll floorvai=floor((double)v[i]/k);
            ll ceilval=ceil((double)v[i]/k);

            sfloor+=floorvai;
            sceil+=ceilval;
        }
        if(sfloor<=0 and sceil>=0){
            cout<< "YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}