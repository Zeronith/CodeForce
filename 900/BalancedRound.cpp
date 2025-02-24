#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    for(int p=0; p<t; p++)
    {
        int n, k;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n ; i++)
        {
            cin>>a[i];
        }
        sort(a, a+n);
        int count,max=0;
        for(int i=0; i<=n-1; i++)
        {
            count=0;
            while(i+1<n && a[i+1]-a[i]<=k )
            {
                count++;
                i++;
            }
            if(max<count)
            {
                max = count;
            }
        }
        cout<<n-(max+1)<<endl;
    }
}