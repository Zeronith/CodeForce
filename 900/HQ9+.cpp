#include<iostream>
using namespace std;
int main()
{
    string code;
    cin>>code;
    for(int i=0; i<code.length(); i++)
    {
        if(code[i]=='Q' || code[i]=='H' || code[i]=='9')
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}