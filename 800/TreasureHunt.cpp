#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main ()
{
  int t;
  cin >> t;
  while(t--)
  {
    int x, y;
    int a;
    cin >> x >> y >> a; 
    a = a - a/(x+y) * (x+y);
    double a1 = double(a+0.5);
    if(a-x < 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
  }
}