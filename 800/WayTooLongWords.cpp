#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    string a[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
        if(a[i].length()>10)
        {
            string abbr="";
            abbr = (a[i][0]+to_string(a[i].length()-2)+a[i][a[i].length()-1]);
            cout<<abbr<<endl;
        }
        else
        {
            cout<<a[i]<<endl;
        }
    }
}