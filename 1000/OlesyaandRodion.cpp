#include<iostream>
using namespace std;
int main()
{
  int n, t;
  cin>>n>>t;
  if(n<to_string(t).length())
  {
    cout<<"-1";
    return 0;
  }
  string ans = to_string(t);
  while(ans.length()<n)
  {
    ans=ans+'0';
  }  
  cout<<ans;
}