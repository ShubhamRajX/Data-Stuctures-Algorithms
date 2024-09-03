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
            // ans store
            ans = mid;

            // right search
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

    int precision;
    cout << "Enter the number of floating digits in precision " << endl;
    cin >> precision;

    double step = 0.1;
    double finalAns = ans;

    for (int i = 0; i < precision; i++)
    {
        for (double j = finalAns; j * j <= n; j = j + step)
        {
            finalAns = j;
        }
        step = step / 10;
    }
    cout <<"Final ans is. "<< finalAns <<endl;

    return 0;
}