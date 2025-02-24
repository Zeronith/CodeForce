#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    long long int  n, answer;
    cin>>n;
    long long int  a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        long long int p=3, adder = 2 ;
        while(p<=a[i])
        {
            bool isFirst = false;
            if(a[i]%p==0)
            {
                cout<<a[i]/p<<endl;
                isFirst = true;
            }
            p=p+pow(2,adder);
            adder++;
            if(isFirst)
            {
                break;
            }
            
        }
    }
}