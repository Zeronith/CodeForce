#include<iostream>
using namespace std;
int main ()
{
    int a , digit=0;;
    cin>>a;
    if(a>0)
    {
        cout<<a;
    }
    else
    {
        a=abs(a);
        int b=a/10;
        int c=(a%10) + (a/100)*10;
        if(min(b,c)==0)
        {
            cout<<"0";
        }
        else
        {
            cout<<"-"<<min(b,c);
        }
        

    }
}