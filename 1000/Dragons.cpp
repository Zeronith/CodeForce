#include<iostream>
using namespace std;
int main ()
{
    int kStr , numDragon;
    cin>>kStr>>numDragon;
    int Dstr[numDragon];
    int Bstr[numDragon];
    for(int i=0; i<numDragon; i++)
    {
        cin>>Dstr[i]>>Bstr[i];
    }
    for(int i=0; i<numDragon-1; i++)
    {
        for(int j=0; j<numDragon-i-1; j++)
        {
            if(Dstr[j]>Dstr[j+1])
            {
                int temp1 = Dstr[j];
                int temp2 = Bstr[j];
                Dstr[j] = Dstr[j+1];
                Bstr[j] = Bstr[j+1];
                Dstr[j+1] = temp1;
                Bstr[j+1] = temp2;

            }
        }
    }
    for(int i=0; i<numDragon; i++)
    {
        if(kStr>Dstr[i])
        {
            kStr+=Bstr[i];
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}