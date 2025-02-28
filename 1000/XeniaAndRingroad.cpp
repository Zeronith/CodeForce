#include<iostream>
using namespace std;
int main ()
{
    long long  n, m, task=0, ans=0;
    cin>>n>>m;
    long long loc = 1;
    for(int i=0; i<m ; i++)
    {
        cin>>task;
        if(loc>task)
        {
            ans = ans + (n-loc) + task;
        }
        else
        {
            ans = ans + (task-loc);
        }
        loc = task;
    }
    cout<<ans;    
}

/*
#include<iostream>
using namespace std;
int main ()
{
    int n, m;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0; i<n; i++)
    {
        a[i]=i+1;
    }
    for(int j=0; j<m ; j++)
    {
        cin>>b[j];
    }
    int counter=0;
    for(int i=0, j=0; j<m; i++)
    {
        if(i==n-1)
        {
            i=0;
        }
        while(a[i]==b[j])
        {
            if(b[j]==b[j-1])
            {
                counter--;
            }
            j++;
        }
        counter++;
    }
    cout<<counter;
}
*/