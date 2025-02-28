#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][3];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>a[i][j];
        }
    }   
    for(int j=0; j<3; j++)
    {
        int sum=0;
        for(int i=0; i<n ; i++)
        {
            sum+=a[i][j];
        }
        if(sum!=0)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}