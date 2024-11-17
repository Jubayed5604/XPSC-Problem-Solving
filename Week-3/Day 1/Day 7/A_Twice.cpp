// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t; cin >> t;
//     while(t--){ 
//         int n; cin >> n;
//         int ar[n];
//         map<int,int>mp;
//         for (int i = 0; i < n; i++) {
//             cin >> ar[i];
//             mp[ar[i]]++;
//         }
//         int c = 0;
//         for(auto i: mp){
//             c += i.second / 2;
//         }
//         cout << c << endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n;
        cin >> n;
        vector<int>a(n);
        map<int,int>m;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
            m[a[i]]++;
        }
        int sum = 0;
        for(auto i : m){
            if(i.second >= 2){
                sum += i.second / 2;
            }
        }
        cout << sum << endl;
    }
    return 0;
}