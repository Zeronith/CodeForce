#include<iostream>
using namespace std;
int main ()
{
    string username;
    cin>>username;
    int freq[26]={};
    for(int i=0; i<username.length(); i++)
    {
        freq[int(username[i])-97]++;    
    }
    int count = 0;
    for(int i=0; i<26; i++)
    {
        if(freq[i]!=0)
        {
            count++;
        }
    }
    if(count%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
}
