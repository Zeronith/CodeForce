#include<iostream>
using namespace std;
int main ()
{
    string str;
    cin>>str;
    for(int i=0; i<str.length();)
    {
        if(str[i]=='1' && str[i+1]=='4' && str[i+2]=='4')
        {
            i+=3;
        }
        else if(str[i]=='1' && str[i+1]=='4')
        {
            i+=2;
        }
        else if(str[i]=='1')
        {
            i++;
        }
        else
        {
            cout<<"NO";
            i++;
            return 0;
        }
    }
    cout<<"YES";
}