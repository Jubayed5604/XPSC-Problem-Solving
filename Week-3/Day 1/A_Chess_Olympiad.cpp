#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    
   int x, y,z; cin >> x >> y >> z;
   float sum = float(x + float(y) * 0.5 + z);
   float mytm = sum - z, oppnt = sum - x;
   if(4 - oppnt > 2)cout << "Yes" << endl;
   else cout << "No" << endl;
return 0;
}