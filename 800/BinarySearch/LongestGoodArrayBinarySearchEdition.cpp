#include<iostream>
using namespace std;

void bs(int left, int right)
{
    int ans = 0;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;  // This avoids potential overflow
        if (left + (mid * (mid + 1)) / 2 <= right)
        {
            left = mid + 1;
            ans = mid;
        }
        else
        {
            right = mid - 1;
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int left, right;
        cin >> left >> right;
        bs(left, right);
    }
}
