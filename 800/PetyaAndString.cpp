#include<iostream>
using namespace std;
int main ()
{
    string a, b;
    cin>>a>>b;
    for(int i=0; i<a.length(); i++)
    {
        if(65<=int(a[i]) && int(a[i])<=90)
        {
            a[i]=char(int(a[i])+32);
        }
        if(65<=int(b[i]) && int(b[i])<=90)
        {
            b[i]=char(int(b[i])+32);
        }   
    }
    for(int i=0; i<a.length(); i++)
    {
        if(int(a[i])>int(b[i]))
        {
            cout<<1;
            return 0;
        }
        else if(int(a[i])<int(b[i]))
        {
            cout<<(-1);
            return 0;
        }
    }   
    cout<<0;
}