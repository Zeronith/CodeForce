#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int solve(int n, int k)
{
  vector <int> result;
  int element;
  for(int i=0; i<n; i++)
  {
    cin >> element;
    if (element%k==0)
    {
      result.push_back(0);
    }
    else
    {
      result.push_back(k-(element%k));
    }
  }
  sort(result.begin() , result.end());
  if(k==4)
  {
    return result[0];
  }
  return result[0];
}
int main ()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n, k;
    cin >> n >> k;
    cout << solve(n , k) <<  endl;
  }

}