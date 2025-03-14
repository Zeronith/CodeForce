#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    for(int i=0; i<n ; i++)
    {
        int t, counter=0, min=0;
        cin>>t;
        char a[t];
        for(int j=0; j<t; j++)
        {
            cin>>a[j];
            if(a[j]=='(')
            {
                counter++;
            }
            else
            {
                counter--;
            }
            if(min>counter)
            {
                min=counter;
            }
        }
        cout<<abs(min)<<endl;
        
    }
}