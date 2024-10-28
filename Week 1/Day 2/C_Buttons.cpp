#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    
    int a, b; cin >> a  >> b;
    int sum = 0;
    if(a>b){
        sum += a;
        a--;
        sum = sum + max(a,b);
    }
    else{
        sum += b;
        b--;
        sum = sum + max(a,b);
    }
    cout << sum << endl;
return 0;
}