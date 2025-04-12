#include<iostream>
#include<cmath>
using namespace std;
void answer(long long  sum)
{
  long long int left = 0;
  long long int  right = sum, mid=0;
  while(left <= right)
  {
     mid = (right + left) / 2;
     if (mid > sqrt(sum)) 
     {
        right = mid - 1;
       continue;  // mid is too large, we can safely say no.

     }

     if(mid * mid == (sum))
     {
        cout<<"YES" << endl;
        return ;
     }
     else if(mid * mid > sum)
     {
       right = mid - 1;
     }
     else 
     {
       left = mid + 1;
     }
  }
  cout<<"NO" << endl;
} 
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    long long int n , elem , sum=0;
    cin >> n;
    while(n--)
    {
      cin>>elem;
      sum+=elem;
    }
    answer(sum);
  }

}