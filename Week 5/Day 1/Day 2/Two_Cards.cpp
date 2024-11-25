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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        map<int,int,greater<int>> v1;
        for (int i = 0; i < n; i++) {
            v1[a[i]]++;
            v1[b[i]]++;
        }
        int aa = v1.begin()->second;
        int element = v1.begin()->first;
        if(aa > 2)cout << "No" << endl;
        else {
            if(aa==1)cout << "Yes" << endl;
            else{
                bool ans = false;
                for (int i = 0; i < n; i++) {
                    if(a[i]==element and b[i]==element){
                        ans = true;
                        break;
                    }
                }
                if(ans)cout << "Yes" << endl;
                else cout << "No" << endl;
            }
        }
        
    }
    return 0;
}
