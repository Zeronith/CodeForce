#include<iostream>
using namespace std;
int main ()
{
    int a, b, c;
    cin>>a>>b>>c;
    int multi=0, smulti=0,multis=0,sum=0, multibra=0, bramulti=0;
    multi=a*b*c;
    smulti=a+b*c;
    multis=a*b+c;
    sum=a+b+c;
    multibra=a*(b+c);
    bramulti=(a+b)*c;
    cout<<max(max(max(max(max(multi, smulti), multis), sum), multibra), bramulti);
    
}