#include<iostream>
using namespace std;
int main ()
{
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char c;
    cin>>c;
    string str;
    cin>>str;
    for(int i=0; i<str.length(); i++)
    {
        for(int j=0; j<keyboard.length(); j++)
        {
            if(str[i]==keyboard[j])
            {
                if(c == 'L')
                {
                    cout<<keyboard[j+1];
                }
                else if(c == 'R')
                {
                    cout<<keyboard[j-1];
                }
            }
        }
    }

}