#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=0; i<(n*2)-1; i++)
  {
    for(int j=0; j<=i; j++)
    {
      if((i+j)<(n*2)-1)
      {
          cout<<"* ";        
      }
    }
    cout<<endl;
  }
}