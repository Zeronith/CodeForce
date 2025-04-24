#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n&1)
        {
            cout << n << " ";
            for ( int i=1; i<n; i++)
            {
                cout << i << " ";
            }
        }
        else
        {
            cout << "-1";
        }
        cout << endl;
        
    }
}