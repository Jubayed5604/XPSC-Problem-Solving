#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool knapsack(int n, int weight, int ar[]){
    if(n==0)return false;
    if(weight==0)return true;
    int op1 = knapsack(n-1,weight - ar[n-1],ar);
    int op2 = knapsack(n-1,weight,ar);
    return op1 || op2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){ 
        int n, k; cin >> n >> k;
        int ar[n], sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
            sum += ar[i];
        }
        if(sum % 2)cout << "NO" << endl;
        else {
            if(knapsack(n+1,sum/2,ar))
            cout << "YES" << endl;
        }
    }
    return 0;
}