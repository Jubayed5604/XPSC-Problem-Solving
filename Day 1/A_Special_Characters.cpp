#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n % 2 != 0)cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            string a = "AA";
            string b = "BB";
            for(int i=0;i<n/2;i++){
                if(i%2==0)cout << a;
                else cout << b;
            }
            cout << endl;
        }
    }
return 0;
}