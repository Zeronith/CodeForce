#include<iostream>
using namespace std;
int main ()
{
  int testCase;
  cin>>testCase;
  for(int i=0; i<testCase; i++)
  {
    long long int x, y, a, b;
    cin>>x>>y;
    cin>>a>>b;
    long long int minimum = min(x,y);
    long long int maximum = max(x,y);
    long long int resultVersionA = b*minimum+(maximum-minimum)*a;
    long long int resultVersionB = (maximum+minimum) * a;
    if(resultVersionA>resultVersionB)
    {
      cout<<resultVersionB<<endl;
    }
    else
    {
      cout<<resultVersionA<<endl;
    }
    /*
    11 47
    8 101   464 -> 11+47 = 58 -> 58*8 == 464
    */
  }
}