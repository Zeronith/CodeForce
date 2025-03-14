#include<iostream>
using namespace std;
int main ()
{
  int testCase;
  cin>>testCase;
  for(int i=0; i<testCase; i++)
  {
    int n,k;
    cin>>n>>k;
    int initK = k;
    if(n>k)
    {
      if(n%k!=0)
      {
        k=k*((n/k)+1);
      }  
      else
      {
        k=k*(n/k);
      }
    }
    if(k%n!=0)
    {
      cout<<k/n+1<<endl;
    }
    else
    {
      cout<<k/n<<endl;
    }
  }
}