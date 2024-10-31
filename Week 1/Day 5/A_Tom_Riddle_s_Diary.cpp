#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    map<string, int>freq;
    while(t--){ 
        string s; cin >> s;
        freq[s]++;
        if(freq[s]>1)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}