#include<iostream>
using namespace std;
void solve()
{
  int n, m , l , r, lp=0, rp=0;
  cin >> n >> m >> l >> r;
  while(l<lp && abs(lp) + rp < m)
  {
    lp--;
  }
  while(r>rp && abs(lp) + rp < m)
  {
    rp++;
  }
  cout << lp << " " << rp << endl;
}
int main ()
{
  int t;
  cin >> t;
  while(t--)
  {
    solve();
  }
}