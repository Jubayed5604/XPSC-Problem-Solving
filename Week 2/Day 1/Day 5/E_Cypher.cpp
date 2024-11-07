#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t;
    while (t--) { 
        int n; 
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        for (int i = 0; i < n; i++) {

            int p;
            cin >> p;
            string s; 
            cin >> s;
            
            int c = 0;
            for (int i = 0; i < p; i++) {
                if (s[i] == 'U') c--;
                else c++;
            }
            if(c>0){
                while(c--){
                    ar[i]++;
                    if(ar[i]==10)ar[i] = 0;
                }
            }
            else {
                while(c++){
                    ar[i]--;
                    if(ar[i]==-1)ar[i] = 9;
                }
            }
            
        }
        for (int i = 0; i < n; i++) {
            cout << ar[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
