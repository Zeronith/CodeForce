#include<iostream>
using namespace std;
int main ()
{
    int a[5][5], ans;
    for(int i=0 ; i<5 ;i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                ans = abs(2-i)+abs(2-j);
            }
        }
    }
    cout<<ans;
}