#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; cin >> t;
    while(t--){ 
        int n; cin >> n;
        int ar[n];
        int arr[26][2];
        for(int i = 0; i < n; i++)cin >> ar[i];
        for(int i = 0; i < 26; i++){
            arr[i][0] = 'a' + i;
            arr[i][1] = 0;
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 26; j++){
                if(ar[i]==arr[j][1]){
                    char a = arr[j][0];
                    cout << a;
                    arr[j][1]++;
                    j = 26;
                }
            }
        }
        cout << endl;
        }
    return 0;
}