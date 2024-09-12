#include <iostream>
using namespace std;

int solve(int n,int m)
{
    int start = 0;
    int end = abs(n);
    // int dividend = n;
    // int divisor = m;
    int ans = 0;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        //perfect solution
        if (abs(mid * m) == abs(n))
        {
            ans = mid;
            break;
        }
        if (abs(mid * m) > abs(n))
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
    if((m < 0 && n < 0) || (m > 0 && n > 0))
    
        return ans;
    
    else{
        return -ans;
    }
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
    cout << "Ans is-> " << ans << endl;

    int precision;
    cout << "Enter the number of floating digits in precision " << endl;
    cin >> precision;

    double step = 0.1;
    double finalAns = ans;

    for (int i = 0; i < precision; i++)
    {
        for (double j = finalAns; j * m <= n; j = j + step)
        {
            finalAns = j;
        }
        step = step / 10;
    }
    cout <<"Final ans is. "<< finalAns <<endl;


    return 0;
}