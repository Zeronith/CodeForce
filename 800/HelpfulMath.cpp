#include<iostream>
using namespace std;
int main()
{
    string state;
    cin>>state;
    for(int j=0; j<state.length(); j++)
    {
        for(int i=0; i<state.length(); i++)
        {
            if(state[i]=='+')
            {
                if(state[i-1]>state[i+1])
                {
                    char temp;
                    temp = state[i-1];
                    state[i-1] = state[i+1];
                    state[i+1]=temp;
                }
            }
        }
    }
    cout<<state;
}