#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
      int e;
      cin >> e;
      v.emplace_back(e);
    }
    sort(v.begin(), v.end());
    int teamNumber=0;
    for(int i=n-1; i>=0; i--)
    {
      if(v[i] >= k)
      {
        teamNumber++;
      }
      else
      {
        int sum=v[i], j=i-1;        
        while(sum < k)
        {
          sum += (v[j])/(i-j);
          j--;
          i--;
        }
        teamNumber++;
      }
    }
    cout  << " Ans : "<< teamNumber << endl ; 
  }
}