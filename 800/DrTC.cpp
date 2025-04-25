#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n;
    cin >> n;
    vector<char> v;
    for(int i=0; i<n; i++)
    {
      char el;
      cin >> el;
      v.emplace_back(el);
    }
    int count=0;
    for(int i=0; i<n; i++)
    {
      (v[i]=='1') ? v[i]='0' : v[i]='1';
      // cout << v[i] << " ";
      for(int j=0;j<n ; j++)
      {
        if(v[j]=='1')
        {
          count++;
        }
      }
      (v[i]=='1') ? v[i]='0' : v[i]='1';
    }
    cout << count << endl;
  }
}