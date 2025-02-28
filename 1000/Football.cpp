#include<iostream>
#include<unordered_map>
using namespace std;
int main ()
{
    unordered_map <string, int> overview ;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string teamName;
        cin>>teamName;
        overview[teamName]++;
    }
    /*
    for(auto i : overview)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
        */
    string winnerTeam ;
    int max = 0;
    for(auto i : overview)
    {
        if(max<i.second)
        {
            winnerTeam = i.first;
            max = i.second;
        }
    }
    cout<<winnerTeam;
}