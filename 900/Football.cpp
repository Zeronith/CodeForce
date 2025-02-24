#include<iostream>
using namespace std;
int main ()
{
    string playerpos;
    cin>>playerpos;
    int count = 1;
    for(int i=1 ; i<playerpos.length(); i++)
    {
        if(playerpos[i]==playerpos[i-1])
        {
            count++;
        }
        else
        {
            count=1;
        }
        if(count>=7)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}