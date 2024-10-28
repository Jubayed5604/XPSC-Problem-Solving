#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    
    int n; cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    int sereja = 0, dima = 0, i = 0, j = n-1, c = 0;
    while(i<=j){
        if(c%2==0){
            sereja += max(ar[i],ar[j]);
            if(ar[i]>ar[j]){
                ar[i] = 0;
                i++;
            }
            else {
                ar[j] = 0;
                j--;
            }
        }else{
            dima += max(ar[i],ar[j]);
            if(ar[i]>ar[j]){
                ar[i] = 0;
                i++;
            }
            else {
                ar[j] = 0;
                j--;
            }
        }
        c++;
    }
    cout << sereja << " "<< dima << endl;
return 0;
}