// Solve this
#include<iostream>
#include<vector>
using namespace std;
int main ()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int counter=0, n,k, x, sum=0, index=0 ;
    cin>>n>>k>>x;
    vector<long long int> v(n);
    for(int i=0; i<n; i++)
    {
      cin>>v[i];
    }
    for(int j=0; j<n ; j++)
    {
      
      for(int i=j, index=j; index<n*k;index++, i++)
      {
        if(i==n)
        {
          i=j;
        }
        sum=sum+v[i];
        if(sum>=k)
        {
          counter++;
          sum=0;
          i=j;
        }
      }
    }
    cout<<counter<<endl;  
  }
}