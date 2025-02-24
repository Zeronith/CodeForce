#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    char a[n];
    cin>>a;
    int count=0, max=0;
    string out;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i;j<n-1; j++)
        {
            if(a[i]==a[j] && a[i+1]==a[j+1])
            {
                count++;
            }
        }
        if(max<count)
        {
            out = "";
            max = count;
            out = out+a[i]+a[i+1];
        }
        count=0;
    }
    cout<<out;
}