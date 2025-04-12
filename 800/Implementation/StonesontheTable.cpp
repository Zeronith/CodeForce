#include<iostream>
using namespace std;
int main ()
{
  int t, ans=0;
  char b='N';
  cin>>t;
  while(t--)
  {
    char a;
    cin>>a;
    if(a==b)
    {
      ans++;
    }
    b=a;
  }
  cout<<ans;
}
