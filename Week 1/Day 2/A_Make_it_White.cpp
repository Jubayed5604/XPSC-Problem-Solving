#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int t;
    cin >> t;
    while(t--)
    {
        int n,c=0;
        cin >> n;
        char a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            if(a[i]=='B')c++;
        }
        int t1,t2;
        if(c==1)cout << 1 << endl;
        else
        {
            for(int i=0; i<n; i++)
            {
                if(a[i]=='B')
                {
                    t1=i+1;
                    break;
                }
            }
            for(int i=n-1; i>=0; i--)
            {
                if(a[i]=='B')
                {
                    t2=i+1;
                    break;
                }
            }
            cout << (t2-t1)+1 << endl;
 
        }
    }
    return 0;
}