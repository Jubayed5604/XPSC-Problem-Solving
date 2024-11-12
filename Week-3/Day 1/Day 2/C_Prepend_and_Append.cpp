#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n; cin >> n;
        string s; cin >> s;
        int c = 0;
        int i = 0, j = n -1;
        while(i < j){
            if(s[i] != s[j])c++;
            else break;
            i++, j--;
        }
        cout << n - c*2 << endl;
    }
    return 0;
}