#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    
    string s; cin >> s;
    map<char,int>ss;
    for(auto i: s)ss[i] = 1;
    int cnt = 0;
    for(char c = 'a'; c <= 'z'; c++){
        if(ss[c] != 1){
            cout << c << endl;
            return 0;
        }
    }
    cout << "None" << endl;
return 0;
}