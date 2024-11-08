#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;    
    for(int i=1;i<=t;i++){
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        int sum = a[0] + a[1] + a[2];
        sort(a,a+3);
        if(a[2]==0)cout << "Case " << i << ": invalidum" << endl;
        if(a[2]==1)cout << "Case " << i << ": invalidum" << endl;
        if(a[2]==2){
            if( sum != 6)cout << "Case " << i << ": invalidum" << endl;
            else cout << "Case " << i << ": perfectus" << endl;
        }
        if(a[2]==3){
            if(sum != 9)cout << "Case " << i << ": invalidum" << endl;
            else cout << "Case " << i << ": perfectus" << endl;
        }
        if(a[2]==4){
            if((a[1]==3 and a[0]==1)||(a[1]==4 and a[0]==0) || (a[1]==2 and a[0]==1))cout << "Case " << i << ": perfectus" << endl;
            else cout << "Case " << i << ": invalidum" << endl;
        }
        if(a[2]==5)cout << "Case " << i << ": invalidum" << endl;
        if(a[2]==6){
            if(a[1]==3 and a[0]==0)cout << "Case " << i << ": perfectus" << endl;
            else if(a[1]==1 and a[0]==1)cout << "Case " << i << ": perfectus" << endl;
            else cout << "Case " << i << ": invalidum" << endl;
        }
        if(a[2] > 6)cout << "Case " << i << ": invalidum" << endl;

    }
    
    return 0;
}