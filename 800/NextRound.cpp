#include<iostream>
using namespace std;
int main ()
{
    int num_of_contestant , advance_place;
    cin>>num_of_contestant>>advance_place;
    int result[num_of_contestant];
    for(int i=1; i<=num_of_contestant; i++)
    {
        cin>>result[i];
    }
    if(result[advance_place]<=0)
    {
        int cutter = result[advance_place];
        for(int i=num_of_contestant; i>0; i--)
        {
            if(result[i]>cutter)
            {
                cout<<i;
                return 0;
            }
        }
        cout<<0;
    }
    else
    {
        int cutter = result[advance_place];
        for(int i=num_of_contestant; i>0; i--)
        {
            if(result[i]==cutter)
            {
                cout<<i;
                break;
            }
        }
    }
    
}