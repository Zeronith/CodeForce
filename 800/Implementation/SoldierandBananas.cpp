#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int k, n, w, sum=0;
  cin>>k>>n>>w;
  for(int i=1; i<=w; i++)
  {
    sum+=i*k;
  }
  if((n-sum)<0)
  {
    cout<<abs(n-sum);
  }
  else
  {
    cout<<0;
  }
}