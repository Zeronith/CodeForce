#include<iostream>
using namespace std;
int main ()
{
    long long int  n;
    cin>>n;
    long long int a[n];
    for(int i=0; i<n ; i++)
    {
        cin>>a[i];
        if(a[i]%2==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if((a[i]&(a[i]-1))==0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
    }
}