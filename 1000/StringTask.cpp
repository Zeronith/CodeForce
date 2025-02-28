#include<iostream>
using namespace std;
int main ()
{
    string input;
    cin>>input;
    for(int i=0; i<input.length(); i++)
    {
        if(int(input[i])==65 || int(input[i])==69 || int(input[i])==73 || int(input[i])==79 || int(input[i])==85 ||int(input[i])==89)
        {
            continue;
        }
        if(int(input[i])==97 || int(input[i])==101 || int(input[i])==105 || int(input[i])==111 || int(input[i])==117 ||int(input[i])==121)
        {
            continue;
        }
        else
        {
            cout<<".";
            if(int(input[i])<97 && int(input[i])>=65)
            {
                cout<<char(int(input[i])+32);
            }
            else
            {
                cout<<input[i];
            }
        }
    }
}
