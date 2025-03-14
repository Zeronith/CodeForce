#include<iostream>
using namespace std;
int main ()
{
    int a, b;
    cin>>a>>b;
    int a1=a;
    while(a1>=b)
    {
        a=a+(a1/b);
        a1=(a1/b)+(a1%b);
    }
    cout<<a;
}