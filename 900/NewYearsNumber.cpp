#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        bool switcher = false;
        cin>>a[i];
        for(int k=0; k*2021<=a[i]; k++)
        {
            if((a[i]-k*2021)%2020==0)
            {
                cout<<"YES"<<endl;
                switcher=true;
            }
        }
        if(!switcher)
        {
            cout<<"NO"<<endl;
        }
    }
}