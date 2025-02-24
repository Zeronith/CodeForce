#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[13];
    for(int i=0; i<12; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<11; i++)
    {
        for(int j=0; j<11-i; j++)
        {
            if(a[j]<a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    int sum=0;
    for(int i=0; i<13; i++)
    {
        if(sum>=n)
        {
            cout<<i;
            return 0;   
        }
        sum+=a[i];
    }
    cout<<"-1";
}