#include<iostream>
using namespace std;
int main ()
{
    int num;
    cin>>num;
    int a[num];
    for(int i=0; i<num ; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<num-1; i++)
    {
        for(int j=0; j<num-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp= a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0; i<num; i++)
    {
        cout<<a[i]<<" ";
    }
}