#include<iostream>
using namespace std;
int main ()
{
    int prob_num;
    int count = 0;
    cin>>prob_num;
    for(int i=0 ; i<prob_num; i++)
    {
        int Pet_ans, Vas_ans, Tom_ans;
        cin>>Pet_ans>>Vas_ans>>Tom_ans;
        if(Pet_ans+Vas_ans+Tom_ans>=2)
        {
            count++;
        }
    }
    cout<<count;
}