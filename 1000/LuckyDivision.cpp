#include<iostream>
using namespace std;
bool checker(int n)
{
    while(n!=0)
    {
        int digit = n%10;
        n=n/10;
        if(digit == 4 || digit == 7 )
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main ()
{
    int n;
    cin>>n;
    int n1=n;
    if(n%4==0 || n%7==0)
    {
        cout<<"YES";
        return 0;
    }
    if(checker(n)==true)
    {
        cout<<"YES";
        return 0;
    }
    for(int i=4; i<n1; i++)
    {
        if(n1%i==0 && checker(i)==true)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}