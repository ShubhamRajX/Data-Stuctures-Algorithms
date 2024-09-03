#include <iostream>
using namespace std;

int findsqrt(int n)
{
    int start = 0;
    int end = n;
    int target = n;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (mid * mid == target)
            return mid;

        if (mid * mid > target)
        {
            // left search
            end = mid - 1;
        }
        else
        {
            //ans store
            ans = mid;
            
            //right search
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the Number " << endl;
    cin >> n;

    int ans = findsqrt(n);
    cout << "Ans is " << ans << endl;

    return 0;
}