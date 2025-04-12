#include<iostream>
using namespace std;
int main()
{
  long long int  n, answer=0;
  cin>>n;
  while(n>=100)
  {
    answer++;
    n=n-100;
  }

  while(n>=20)
  {
    answer++;
    n=n-20;
  }
  
  while(n>=10)
  {
    answer++;
    n=n-10;
  }

  while(n>=5)
  {
    answer++;
    n=n-5;
  }

  while(n>=1)
  {
    answer++;
    n=n-1;
  }
  cout<<answer;
}