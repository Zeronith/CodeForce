#include<iostream> // Binary Search Version
using namespace std;
int bs(int n, int k)
{
  int remainingTime = 240-k, ans=0;
  int left = 1 , right = n;
  while(left<=right)
  {
    int mid = (right+left)/2;
    int neededTime = 5*(mid*(mid+1))/2;  // 5(x*(x+1))/2
    if(neededTime>remainingTime)
    {
      right = mid - 1;
    }
    else if(neededTime<=remainingTime)
    {
      left = mid + 1;
      ans=mid;
    }
    
  }
  return ans;
}
int main ()
{
  int n, k;
  cin>>n>>k;  
  cout << bs(n,k);

}