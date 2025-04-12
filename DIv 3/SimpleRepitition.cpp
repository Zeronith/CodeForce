#include<iostream>
using namespace std;
bool isPrime(int x)
{
  if(x<2)
  {
    return false;
  }
  for(int i=2; i<(x/2)+1 ; i++)
  {
    if(x%i==0)
    {
      return false;
    }
  }
  return true;
}
int main ()
{
  int t;
  cin >> t;
  while(t--)
  {
    int x, k;
    cin >> x >> k;
    if(!isPrime(x))
    {
      cout << "NO" << endl;
    }
    else 
    {
      cout << "YES" << endl;
    }
  }
}