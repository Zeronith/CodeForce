#include<iostream>
using namespace std;
int main ()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n, e, Zero=3, One=1, Three=1, Two=2 , Five=1, helper=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
      cin>>e;
      if(e==0)
      {
        Zero--;
      }
      else if(e==1)
      {
        One--;
      }
      else if(e==3)
      {
        Three--;
      }
      else if(e==2)
      {
        Two--;
      }
      else if(e==5)
      {
        Five--;
      }
      if(Zero<1 && One<1 && Three<1 && Two<1 && Five<1)
      {
        helper++;
        if(helper==1)
        {
          cout<<i+1<<endl;
        }
      }
    }
    if(Zero>0 || One>0 || Three>0 || Two>0 || Five>0)
      {
        cout<<0<<endl;
      }
  }
}