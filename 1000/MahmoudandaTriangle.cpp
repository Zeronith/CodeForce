// Didn't solved
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++)
    cin >> arr[i];
    sort(arr,arr+n);
    for (int i=1;i<n-1;i++)
    {
        if (arr[i-1]+arr[i]>arr[i+1])
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}