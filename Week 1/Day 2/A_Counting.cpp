#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    
    int n1, n2; cin >> n1 >> n2;
    if(n1 > n2)cout << 0 << endl;
    else cout << n2 - n1 + 1 << endl;
return 0;
}