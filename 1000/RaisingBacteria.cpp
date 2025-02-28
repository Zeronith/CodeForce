#include<iostream>
using namespace std;
int main ()
{
    int n, bacteria=1, a=1;
    cin>>n;
    while(n!=1)
    {
        if(n%2==0)
        {
            n/=2;
        }
        else
        {
            n=(n-1)/2;
            bacteria++;
        }
    }
    cout<<bacteria;
}