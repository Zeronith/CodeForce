#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int testNum;
  cin>>testNum;
  while(testNum--)
  {
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
      cin>>a[i];
    }
    sort(a, a+n);
    int sum=a[0];
    for(int i=1; i<n; i++)
    {
      sum=(sum+a[i])-1;
    }
    cout<<sum<<endl;
  }
}