#include<iostream>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(i==0 && int(s[i])>=97)
        {
            cout<<char(int(s[i])-32);
            continue;
        }
        cout<<s[i];
    }
}