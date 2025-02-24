#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int stud_num, puzz_num;
    cin >> stud_num >> puzz_num;

    int a[puzz_num]; 
    for (int i = 0; i < puzz_num; i++)
    {
        cin >> a[i];
    }

    for(int i=0; i<puzz_num-1;i++)
    {
        for(int j=0; j<puzz_num-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    int min_diff = INT_MAX;

    for(int i=0; i<=puzz_num-stud_num; i++)
    {
        min_diff = min(min_diff , a[i+stud_num-1]-a[i]);
    }   
    cout<<min_diff;
    return 0;
}
