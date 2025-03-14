/* If u are reading this, current me which is past you wasn't able to solve this problem and saw solution from internet*/
#include<iostream>
using namespace std;
int main ()
{
  int testCase;
  cin>>testCase;
  for(int i=0; i<testCase; i++)
  {
    long long int a, b;
    cin>>a>>b;
    if(b==1)
    {
      cout<<"NO\n";
    }
    else
    {
      cout<<"YES\n"<<a*b*3-a<<" "<<a<<" "<<a*b*3<<endl;
    }
  }
}