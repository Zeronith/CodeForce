#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  while(n--)
  {
    long long int a, sum=0;
    cin>>a;
    while(a>0)
    { 
      sum+=(a-1)*4*(a/2);
      a=a-2;
    }
    cout<<sum<<endl;
  }
}