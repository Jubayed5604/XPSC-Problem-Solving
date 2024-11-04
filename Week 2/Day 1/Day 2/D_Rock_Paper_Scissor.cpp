#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n; cin >> n;
        int chef = 0, chefina = 0;
        string s1, s2; cin >> s1 >> s2;
        map<char,int>m1,m2;
        for (int i = 0; i < n; i++) {
            if(s1[i]=='R'){
                if(s2[i]=='P')chefina++;
                if(s2[i]=='S')chef++;
            }
            else if(s1[i]=='P'){
                if(s2[i]=='R')chef++;
                if(s2[i]=='S')chefina++;
            }
            else{
                if(s2[i]=='P')chef++;
                if(s2[i]=='R')chefina++;
            }
            m1[s1[i]]++;
            m2[s2[i]]++;
        }
        if(chef >= chefina)cout << 0 << endl;
        else{
            int c = 0;
            while(chef <= chefina){
                chef++;
                chefina--;
                c++;
            }
            cout << c << endl;
        }
    }
    return 0;
}