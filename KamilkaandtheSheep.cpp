#include<bits/stdc++.h>
#include<numeric>
#define int long long
using namespace std;
int gcd(int a, int b)
{
  while(b!=0)
  {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;

}

signed main ()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n;
    cin >> n;
    vector <int> v;
    for(int i=0; i<n ; i++)
    {
      int p;
      cin >> p;
      v.emplace_back(p);
    }
    sort(v.begin(), v.end());
    int minimum = v.front();
    int maximum = v.back();

    cout << maximum-minimum << endl;
  }
}