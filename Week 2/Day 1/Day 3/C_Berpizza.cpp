#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    list<int> v;                      
    map<int, list<int>> mp;           
    int c = 1;                        
 
    while (t--) { 
        int n;
        cin >> n;
 
        if (n == 1) {
            int m;
            cin >> m;
            v.push_back(m);
            mp[m].push_back(c);
            c++;                      
        } 
 
        else if (n == 2) {
            cout << mp[v.front()].front() << " ";
            mp[v.front()].pop_front();
 
            if (mp[v.front()].empty()) {
                mp.erase(v.front());
            }
            v.pop_front();                    
        } 
 
        else if (n == 3) {
            auto it = --mp.end();
            int mx = it->first;
            cout << it->second.front() << " ";
            it->second.pop_front();
            if (it->second.empty()) {
                mp.erase(mx);
            }
            v.remove(mx);
        }
    }
    cout << endl;
    return 0;
}