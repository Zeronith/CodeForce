#include<iostream>
using namespace std;
int isLucky(int ans)
{
  if(ans==0)
  {
    cout<<"NO";
    return 0;
  }
  while(ans!=0)
  {
    if(ans%10!=4 && ans%10!=7)
    {
      cout<<"NO";
      return 0;
    }
    ans/=10;
  }
  cout<<"YES";
  return 1;

}
int main()
{
  long long int number, ans=0;
  cin>>number;
  while(number!=0)
  {
    if(number%10==7 || number%10==4 )
    {
      ans++;
    }
    number/=10;
  }
  isLucky(ans);
  
}