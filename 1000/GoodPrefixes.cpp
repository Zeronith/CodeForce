#include<iostream>
using namespace std;
int main ()
{
  int t;
  cin>>t;
  while (t--)
  {
    long long int n, max=0, sum=0, answer=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
      long long int e;
      cin>>e;
      if(e>max)
      {
        sum+=max;
        max=e;
      }
      else
      {
        sum+=e;

      }
 //     cout<<"Sum : "<<sum<<endl;
      
      if(sum==max)
      {
        answer++;
  //     cout<<"Answer : "<<answer<<endl;
      }
    }
   cout<<answer<<endl;

  }
  
}