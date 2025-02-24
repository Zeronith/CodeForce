#include<iostream>
using namespace std;
int main ()
{
    int n, p=0,q=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            cout<<"0"<<endl;
            continue;
        }
        while(a[i]%3==0)
        {
            p++;
            a[i]=a[i]/3;
        }
        while(a[i]%2==0)
        {
            q++;
            a[i]=a[i]/2;
        }
        if(p>=q && a[i]==1)
        {
            cout<<q+2*(p-q)<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
        p=0,q=0;
    }
}