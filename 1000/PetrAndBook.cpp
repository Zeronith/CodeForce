// What the heck i have been trying to find good solution but it just works by bruteforce so i guess i will leave it here as this solution
#include<iostream>
#include<vector>
using namespace std;
int main ()
{
  int n;
  cin >> n;
  vector <int> reading(7);
  int sum = 0;
  for(int i=0; i<7 ; i++)
  {
    cin >> reading[i];
  }
  int i=0; 
  while(n>0)
  {
    if(i==7)
    {
      i=0;
    }
    n = n - reading[i];
    i++;
  }  
  cout << i;
}