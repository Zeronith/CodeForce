#include<iostream>
using namespace std;
int main ()
{
    string lyrics;
    string actual_lyrics;
    int space=0;
    cin>>lyrics;
    for(int i=0 ; i<lyrics.length(); i++)
    {
        if(lyrics[i]=='W' && lyrics[i+1]=='U' && lyrics[i+2]=='B')
        {
            i+=2;
            if(space==1)
            {
                actual_lyrics=actual_lyrics+" ";
                space++;
            }
        }
        else
        {
            actual_lyrics+=lyrics[i];
            space=1;
        }
    }
    cout<<actual_lyrics;
}