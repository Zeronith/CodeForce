#include<iostream>
using namespace std;
int main ()
{
  int testNum;
  cin>>testNum;
  while(testNum--)  
  {
    int n, indic=0;
    cin>>n;
    for(int i=n-1 ; i>=0; i--)
    {
      int nxor=n^i;
      if((n+i)>nxor && (n+nxor)>i && (i+nxor)>n)
      {
        indic=1;
        cout<<i<<endl;
        break;
      }
    }
    if(indic==0)
    {
      cout<<"-1"<<endl;
    }
  }
}