#include <iostream>
using namespace std;
 
int main(){
  int t,n, num;
  for(cin>>t;cin>>n;){
    int ans = 0;
    for(int i=0;i<n;++i)
      cin>>num, ans ^= num;
    cout<< (n&1 || !ans ? ans : -1) <<endl;
  }
}