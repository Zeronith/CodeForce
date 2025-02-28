#include<iostream>
using namespace std;
int main ()
{
    string str;
    cin>>str;
    int count=0;
    bool isH=false,isE=false,isL1=false, isL2=false, isO=false;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]=='h' && isH == false)
        {
            count++;
            isH = true;
        }
        else if(str[i]=='e' && isE == false && isH == true)
        {
            count++;
            isE = true;
        }
        else if(str[i]=='l' && isL1 == false && isE == true)
        {
            count++;
            isL1 = true;
        }
        else if(str[i]=='l' && isL2 == false && isL1 == true)
        {
            count++;
            isL2 = true;
        }
        else if(str[i]=='o' && isO == false && isL2 == true)
        {
            count++;
            isO = true;
        }
    }
    if(count == 5)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}