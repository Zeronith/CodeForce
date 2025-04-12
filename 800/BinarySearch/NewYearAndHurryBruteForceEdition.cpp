#include<iostream>
using namespace std;
int main ()
{
  int n, k;
  cin>>n>>k;
  int Minute = 240 - k;
  int ans=0,i=2, timeSpend = 5;
  while(timeSpend<=Minute)
  {
        ans++;
        timeSpend+=(i*5);
        i++;
  }
  if(ans>n)
  {
    cout<<n;
    return 0;
  }
  cout<<ans;
}