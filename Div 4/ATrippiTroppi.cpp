#include<iostream>
using namespace std;
int main ()
{
  int n;
  cin >> n;
  for(int i=0; i<=n; i++)
  {
    string word, answer ;
    getline(cin, word);
    for(int j=0; j<word.size(); j++)
    {
      if(j==0 || ( j!=0 && word[j-1]==' ' ))
      {
        answer+=word[j];
      }
    }
    cout << answer << endl;
  }

}