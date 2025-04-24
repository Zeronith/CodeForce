#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main ()
{

  // in this problem i learned if i created vector like this "vector <int> vec(n) its already created"
  // default element with 0 value , if we use emplace_back or
  // push_back for it , it will cause overflowww 

  int t;
  cin >> t;
  while(t--)
  {

    // Taking data from input
    int n;
    cin >> n;
    string str;
    cin >> str;
    vector<int> v;
    for(int i=0; i<n ; i++)
    {
      v.emplace_back(i+1);
    }
    

    // Actual Solving
    vector <int> ans;
    for(int i=n-1; i>0 ; i--)
    {
      if(str[i-1]=='>')
      {
        ans.emplace_back(v.back());
        v.pop_back();
      }
      else if(str[i-1]=='<')
      {
        ans.emplace_back(v.front());
        v.erase(v.begin());
      }
    }
    ans.push_back(v.front());

    reverse(ans.begin(), ans.end());
    for(auto & elem : ans)
    {
      cout << elem << " ";
    }
    cout << "\n";
  }
}