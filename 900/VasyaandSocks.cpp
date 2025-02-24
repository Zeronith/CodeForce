#include<iostream>
using namespace std;
int main ()
{
    int n,m, d;
    cin>>n>>m;
    int k=n/m;
    while(1)
    {
        if(k==d)
        {
            break;
        }
        d=k;
        k=(n+k)/m;
    }
    cout<<n+k;
    
    
}