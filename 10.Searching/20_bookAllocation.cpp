#include <iostream>
#include <numeric>
using namespace std;

bool isPossibleSolution(int A[], int n, int m, int sol)
{
    int pageSum = 0;
    int c = 1;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > sol)
        {
            return false;
        }
        if (pageSum + A[i] > sol)
        {
            c++;
            pageSum = A[i];
            if (c > m)
            {
                return false;
            }
        }
        else
        {
            pageSum += A[i];
        }
    }
    return true;
}

// Function to find minimum number of pages.
long long findPages(int n, int A[], int m)
{
    if (m > n)
    {
        return -1;
    }
    int start = 0;
    int end = accumulate(A, A + n, 0);
    int ans = -1;

    while (start <= end)
    {
        int mid = (start + end) >> 1;
        if (isPossibleSolution(A, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int A[] = {12, 34, 67, 90};

    int m = 2;                        // Number of students
    int n = sizeof(A) / sizeof(A[0]); // Number of books

    long long result = findPages(n, A, m);
    
    if (result != -1)
    {
        cout << "Minimum number of pages: " << result << endl;
    }
    else
    {
        cout << "Not possible to allocate pages" << endl;
    }

    return 0;
}