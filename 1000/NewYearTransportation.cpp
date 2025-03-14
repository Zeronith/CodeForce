#include<iostream>
using namespace std;
int main ()
{
    int n, t;
    cin>>n>>t;
    int a[n-1];
    for(int i=0; i<n-1; i++)
    {
        cin>>a[i];
    }
    int index = 0;
    int runner = 0;
    while(index <= (t-1))
    {
        if(index == (t-1))
        {
            cout<<"YES";
            return 0;
        }
        index = index + a[runner]; 
        runner=runner+a[runner];
    }
    cout<<"NO";
    
}