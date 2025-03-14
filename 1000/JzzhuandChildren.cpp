#include<iostream>
using namespace std;
int main ()
{
  int n , m;
  cin>>n>>m;
  int count=0;
  int a[n], max=0, max_i=0;
  for(int i=0;i<n; i++)
  {
    cin>>a[i];
    if(m>=a[i])
    {
      count++;
    }
    if(a[i]>=max)
    {
      max=a[i];
      max_i = i;
    }
  }
  if(count==n)
  {
    cout<<n;
    return 0;
  }
  else
  {
    int equalizer ;
    for(int i=max-1; i>1; i--)
    {
      if(i%m==0)
      {
        equalizer=i;
        break;
      }
    }
    for(int i=0; i<n;i++)
    {
      a[i]=a[i]-equalizer;
    }    
    for(int i=n-1; i>=0; i--)
    {
      if(a[i]>0)
      {
        cout<<i+1;
        return 0;
      }
    }
  }
}