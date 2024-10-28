#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    
    int a, b, c; cin >> a >> b >> c;
    int i = 1;
    for(int i = a; i <= b; i++){
        if(i % c==0){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
return 0;
}