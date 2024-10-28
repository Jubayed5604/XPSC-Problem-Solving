#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    
    ll n; cin >> n;
    ll ar[n];
    ll minNegOdd = 1e9, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
        sum += ar[i];
        if(ar[i] % 2 != 0){
            if(ar[i] < minNegOdd)minNegOdd = ar[i];
        }
    }
    if(sum % 2 == 0)cout << sum << endl;
    else cout << sum - minNegOdd << endl;
return 0;
}