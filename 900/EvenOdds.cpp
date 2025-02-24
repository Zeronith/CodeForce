#include<iostream>
using namespace std;
int main ()
{
    long long num , pos, interval ;
    cin>>num>>pos;
    long long  start , end;
    if(num%2==1)
    {
        interval = num/2+1;
    }
    else
    {
        interval = num/2;
    }
    if(interval>=pos)
    {
        end = pos;
        start = 1;
    }
    else
    {
        end = pos-interval;
        start = 2;
    }
    for(int i=1;i<end; i++)
    {
        start+=2;
    }
    cout<<start;
}