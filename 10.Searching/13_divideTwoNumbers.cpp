#include <iostream>
using namespace std;

int solve(int n,int m)
{
    int start = 0;
    int end = n;
    int dividend = n;
    int divisor = m;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (mid * divisor == dividend)
            return mid;

        if (mid * divisor > dividend)
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
    cout << "Enter the Dividend " << endl;
    cin >> n;

    int m;
    cout << "Enter the Divisor " << endl;
    cin >> m;

    int ans = solve(n,m);
    cout << "Ans is " << ans << endl;

    // int precision;
    // cout << "Enter the number of floating digits in precision " << endl;
    // cin >> precision;

    // double step = 0.1;
    // double finalAns = ans;

    // for (int i = 0; i < precision; i++)
    // {
    //     for (double j = finalAns; j * j <= n; j = j + step)
    //     {
    //         finalAns = j;
    //     }
    //     step = step / 10;
    // }
    // cout <<"Final ans is. "<< finalAns <<endl;

    return 0;
}