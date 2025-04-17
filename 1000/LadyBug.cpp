#include<iostream>
using namespace std;
void solve()
{
  int n, AOne=0, AZero=0 , BOne=0, BZero=0;
  cin >> n;
  char a[n], b[n];
  cin >> a;
  cin >> b;
  for(int i=0; i<n; i++)
  {
    if(a[i]%2==1)
    {
      AOne++;
    }
    else if(a[i]%2==0)
    {
      AZero++;
    }
    if(b[i]%2==1)
    {
      BOne++;
    }
    else if(b[i]%2==0)
    {
      BZero++;
    }
  }
  if(AOne>BOne)
  {
    cout << "NO" << endl;
  }
  else 
  {
    cout << "YES" << endl;
  }
}
int main ()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
}