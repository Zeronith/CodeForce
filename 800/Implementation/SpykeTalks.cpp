#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main ()
{
  int n;
  cin>>n;
  vector <int> a(n);
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
  }
  sort(a.begin(), a.end());
  int counter=0;
  for(int i=0; i<a.size()-1; i++)
  {
    while(a[i]==a[i+1])
    {
      counter++;
      i++;
    }
    if(counter%2==1 && counter>2)
    {
      cout<<-1;
      return 0;
    }
  } 
  cout<<counter;
}