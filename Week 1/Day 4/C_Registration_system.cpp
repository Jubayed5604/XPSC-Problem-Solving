#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; 
    cin >> n;
    map<string,int>freq;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        freq[s]++;
        if(freq[s] == 1){
            cout << "OK" << endl;
        }
        else if(freq[s] > 1){
            cout << s << freq[s]-1 << endl;
        }
    }
    
    return 0;
}