#include<iostream>
using namespace std;
int main()
{
  string word;
  int bigLetter=0, smallLetter=0;
  cin>>word;
  for(int i=0; i<word.length(); i++)
  {
    if(int(word[i])<92)
    {
      bigLetter++;
    }
    else 
    {
      smallLetter++;
    }
  }
  if(bigLetter>smallLetter)
  {
    for(int i=0; i<word.length(); i++)
    {
      if(int(word[i])>=92)
      {
        word[i] =char(int(word[i]) - 32);
      }
    }
  }
  else
  {
    for(int i=0; i<word.length(); i++)
    {
      if(int(word[i])<=92)
      {
        word[i] =char(int(word[i]) + 32);
      }
    }
  }
  cout<<word;
}