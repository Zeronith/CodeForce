#include<iostream>
using namespace std;
int solve(long long int d)
{
  long long int numOfMove = 0;
  while(d%3==0 || d%2==0)
  {
    if(d%2==0)
    {
      d=d/2;
      numOfMove++;
    }
    else if(d%3==0)
    {
      d=d/3;
      numOfMove++;
    }
  }
  if(d==1)
  {
    return numOfMove;
  }
  return -1;
}
int main ()
{
  long long int n, m;
  cin>>n>>m;
  if(m%n==0)
  {
    cout<<solve(m/n);
  }
  else
  {
    cout<<-1;
  }
}