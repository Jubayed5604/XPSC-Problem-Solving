#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    
    int x, y, z;
    cin >> x >> y >> z;
    if(y * z <= x)cout << x - y*z << endl;
    else cout << -1 << endl;
return 0;
}