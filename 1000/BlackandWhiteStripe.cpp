#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int solve(int n, int k) 
{
  vector<char> stripe(n);
  int blackCounter = 0 , whiteCounter = 0;
  for(int i=0 ; i < n ;  i++)
  {
    cin>>stripe[i];
    /*
    if(i<k)
    {
      if(stripe[i]=='B')
      {
        blackCounter++;
      }
      else if(stripe[i]=='W')
      {
        whiteCounter++;
      }
    }
      */
  }

  int min = INT_MAX;
  for(int i=k; i<=n; i++)
  {
    for(int j=i-k; j<i ; j++)
    {
      if(stripe[j]=='W')
      {
        whiteCounter++;
      }
    }
    if(whiteCounter<min)
    {
      min = whiteCounter;
    }
  }
  return min ;
  
}
int main ()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n , k;
    cin >> n >> k;
    cout << solve(n , k) << endl;
  }
}