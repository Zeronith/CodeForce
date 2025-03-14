#include<iostream>
using namespace std;
int main ()
{
  long long int n,x;
  cin>>n>>x;
  long long int universalCounter=0 ;
  for(int i=1; i<=n; i++)
  {
    if(x%i==0 && (x/i)<=n)
    {
      universalCounter++;
    }
  }
  cout<<universalCounter;
}