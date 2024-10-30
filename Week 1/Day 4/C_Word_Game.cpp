#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n; cin >> n;
        map<string,int>m;
        vector<string>s1,s2,s3;
        for(int i = 0; i < n; i++){
            string s; cin >> s;
            s1.push_back(s);
            m[s]++;
        }
        for(int i = 0; i < n; i++){
            string s; cin >> s;
            s2.push_back(s);
            m[s]++;
        }
        for(int i = 0; i < n; i++){
            string s; cin >> s;
            s3.push_back(s);
            m[s]++;
        }
        int sum1 = 0, sum2 = 0, sum3 = 0;
        for(int i = 0; i < n; i++){
            if(m[s1[i]]==1){
                    sum1 += 3;
                }
                if(m[s1[i]]==2)sum1 += 1;
                if(m[s2[i]]==1){
                        sum2 += 3;
                    }
                    if(m[s2[i]]==2)sum2 += 1;
                if(m[s3[i]]==1){
                        sum3 += 3;
                    }
                    if(m[s3[i]]==2)sum3 += 1;
        }
        cout << sum1 << " " << sum2 << " " << sum3 << endl;
    }
    return 0;
}