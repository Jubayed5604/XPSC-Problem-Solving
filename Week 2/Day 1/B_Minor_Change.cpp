#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    
    string a, b; cin >> a >> b;
    int c = 0;
    for (int i = 0; i < a.size(); i++) {
        if(a[i]!=b[i])c++;
    }
    cout << c << endl;
return 0;
}