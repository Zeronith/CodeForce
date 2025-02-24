#include<iostream>
using namespace std;
int main ()
{
    int n, m;
    cin>>n>>m;
    int a[n];
    int current_balance=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    int i=0;
    while(m!=0 && i<n)
    {
        if(a[i]<=0 && current_balance>=a[i])
        {
            current_balance-=a[i];
        }
        i++;
        m--;
    }
    cout<<current_balance;
}