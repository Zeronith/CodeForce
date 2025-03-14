#include<iostream>
using namespace std;
int main()
{
  int n, m;
  cin>>n>>m;
  int whole=n/2;
  int remainder=n%2;
  int counter= whole;
 // cout<<whole<<" "<<remainder;
  while(whole>0)
  {
    if((whole+remainder)%m==0)
    {
      cout<<(whole+remainder);
      return 0;
    }
    if(counter!=0)
    {
      counter--;
      remainder++;
    }    
    else
    {
      break;
    }
  }
  cout<<"-1";
}