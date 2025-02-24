#include<iostream>
using namespace std;
int main ()
{
    int n, one=0, zero=0;
    cin>>n;
    char a[n];
    cin>>a;
    for(int i=0; i<n; i++)
    {
        if(a[i]=='0')
        {
            zero++;
        }
        else if(a[i]=='1')
        {
            one++;
        }
    }
    cout<<max(one,zero)-min(one,zero);
}