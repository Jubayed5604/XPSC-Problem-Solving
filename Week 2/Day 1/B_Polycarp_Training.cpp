#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    
    int n; cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    sort(ar,ar+n);
    int ans = 1;
    for(int i = 0; i < n; i++){
        if(ar[i] >= ans)ans++;
    }
    cout << ans - 1 << endl;
return 0;
}