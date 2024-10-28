#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    
    int s, t; cin >> s >> t;
    int c = 0, initial = 0;
    for(int i = initial; i <= s ; i++){
        for(int j = initial;j <= s ; j++){
            for(int k = initial; k <= s ; k++){
                if(i+j+k<=s and i*j*k<=t)c++;
            }
        }
    }
    cout << c << endl;
return 0;
}