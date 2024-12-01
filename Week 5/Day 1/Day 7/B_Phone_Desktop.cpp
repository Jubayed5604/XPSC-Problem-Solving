#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--){ 
        int a , b; cin >> a >> b;
        int result, rem1;
        if(b%2==0){
            result = b/2;
            rem1 = (b/2) * 7;
        }
        else {
            result = (b+1)/2;
            rem1 = (b/2) * 7 + 11 ;
        }
        if(rem1 >= a)cout << result << endl;
        else {
            cout << result + ((a-rem1)+14)/15 << endl;
        }
    }
    return 0;
}