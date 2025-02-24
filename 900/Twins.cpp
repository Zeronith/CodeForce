#include<iostream>
using namespace std;
int main ()
{
    int num, sum=0;
    cin>>num;
    int coins[num];
    for(int i=0; i<sizeof(coins)/sizeof(coins[0]); i++)
    {
        cin>>coins[i];
        sum+=coins[i];
    }
    for(int i=0; i<num-1; i++)
    {
        for(int j=0; j<num-1-i; j++)
        {
            if(coins[j]>coins[j+1])
            {
                int temp = coins[j];
                coins[j] = coins[i];
                coins[i] = temp;
            }
        }
    }
    for(int i=0 ; i<num; i++)
    {
        int subsum=0;
        for(int j=0; j<=i; j++)
        {
            subsum+=coins[j];
        }
        if(subsum>sum-subsum)
        {
            cout<<i+1;
            return 0;
        }
    }
}