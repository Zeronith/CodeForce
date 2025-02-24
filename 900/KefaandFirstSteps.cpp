#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int a[num];
    int comp=0;
    int count = 1;
    for(int i=0; i<num ; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<num ; i++)
    {
        if(a[i-1]<=a[i])
        {
            count++;
        }
        else
        {
            if(comp<count)
            {
                comp=count;
            }
            count=1;
        }
    }
    if(comp>count)
    {
        cout<<comp;
        return 0;
    }
    else
    {
        cout<<count;
    }
}