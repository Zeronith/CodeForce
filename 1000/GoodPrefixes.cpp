#include<iostream>
#include<algorithm>
  using namespace std;
  int main()
  {
    long long int testCase;
    cin>>testCase;
    while(testCase--)
    {
      int n;
      cin>>n;
      long long int a[n], sum=0, answer=0;
      for(int i=0; i<n; i++)
      {
        cin>>a[i];
      }
      for(int i=0; i<n; i++)
      {
        for(int j=0; j<=i; j++)
        {
          for(int k=0; k<=i; k++)
          {
            if(a[0]!=0)
            {
              continue;
            
            }
            if(j!=k)
            {
              sum+=a[k];
            }
          }
          if(sum==a[j])
          {
            cout<<endl<<"a["<<j<<"] : "<<a[j]<<endl;
            answer++;
          }
          sum=0;
        }
      }
      cout<<"Answer : "<<answer<<endl;
    }
  }