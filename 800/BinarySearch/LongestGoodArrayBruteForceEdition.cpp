#include<iostream>
using namespace std;
int main ()
{
  int t;
  cin >> t;
  while(t--)
  {
    int l , r , ans = 0;
    cin >> l >> r;
    int i=0;
    while(l<=r)
    {
      l+=i;
      ans++;
      i++;
    }
    cout<<ans-1<<endl;
  }
}
