#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
using namespace std;
#define getbit(n, i) (((n) & (1LL << (i))) != 0) 
#define setbit0(n, i) ((n) & (~(1LL << (i)))) 
#define setbit1(n, i) ((n) | (1LL << (i))) 
#define togglebit(n, i) ((n) ^ (1LL << (i))) 
#define lastone(n) ((n) & (-(n))) 
char gap = 32;
#define int long long
#define ll long long 
#define lll __int128_t
#define pb push_back
typedef tree<
int,
null_type,
less<int>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
ll hashPrime = 1610612741;
const long long MOD = 1e9 + 7;
void solve() {
    int n,l,r; cin>>n>>l>>r;
    vector<int>v(n);
    
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    //size_t n = v.size();
    ll ans=1;
    for(int i=0;i<n;i++){
        for( int j=i+1;j<n;j++){
            ans*=(v[i]^v[j]);
            //ans%=MOD;
        }
    }int rst=0;
    // for(int i=0;i<n;i++){
    //     rst^=v[i];

    // }
    if(ans>=l and ans<=r) cout<<"YES\n";
    else cout<<"NO\n";
    // if(rst>=l and rst<=r) cout<<"YES\n";
    // else cout<<"NO\n";
    
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}