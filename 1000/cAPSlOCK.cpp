#include<iostream>
using namespace std;
int main ()
{
    string str;
    int upcount=0, locount=0;
    cin>>str;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]>=65 && str[i]<97)
        {
            upcount++;
        }
        else
        {
            locount++;
        }
    }
    if(upcount==str.length() && locount==0)
    {
        for(int i=0; i<str.length(); i++)
        {
            cout<<char(int(str[i])+32);
        }
        return 0;
    }
    else if(upcount==str.length()-1 && str[0]>=92 && locount==1)
    {
        cout<<char(int(str[0])-32);
        for(int i=1; i<str.length(); i++)
        {
            cout<<char(int(str[i]+32));
        }   
        return 0;
    }
    cout<<str;
}