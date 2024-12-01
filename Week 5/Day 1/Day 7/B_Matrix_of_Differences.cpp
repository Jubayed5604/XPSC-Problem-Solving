#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v;
        int l = 1, r = n * n;
        int ar[n][n];
        for(int i = 0; i < n; i++){
            if(i % 2==0){
                for(int j = 0; j < n; j++){
                    if(j % 2==0){
                        ar[i][j] = r--;
                    }
                    else ar[i][j] = l++;
                }
            }
            else{
                for(int j = n-1; j >= 0; j--){
                    if(j % 2){
                        ar[i][j] = r--;
                    }
                    else ar[i][j] = l++;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++){
                cout << ar[i][j] << " ";
            }cout << endl;
        }
    }
    return 0;
}
