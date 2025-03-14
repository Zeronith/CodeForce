#include<iostream>
using namespace std;
int main ()
{
  int n, m;
  cin>>n>>m;
  pair<string, string> language[m];
  for(int i=0; i<m ; i++)
  {
      cin>>language[i].first;
      cin>>language[i].second;  
  }
  for(int i=0; i<n; i++)
  {
    string word ;
    cin>>word;
    for(int j=0; j<m ; j++)
    {
      if(word == language[j].first ||word == language[j].second )
      {
        if(language[j].first.length()>language[j].second.length())
        {
          cout<<language[j].second<<" ";
        }
        else if(language[j].first.length()<=language[j].second.length())
        {
          cout<<language[j].first<<" ";
        }
      }
    }
  }
}