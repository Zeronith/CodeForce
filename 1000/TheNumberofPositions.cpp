#include<iostream>
using namespace std;
int main ()
{
  long long int n, a, b;
  cin>>n>>a>>b;
  long long int startPoint=a+1;
  for(int i=startPoint; i<=n ; i++)
  {
    if((n-i)<=b)
    {
      cout<<n-i+1;
      return 0;
    }
  }
}