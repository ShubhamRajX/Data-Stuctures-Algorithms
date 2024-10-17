#include<iostream>
using namespace std;

bool isPossibleSolution (int arr[], int n, int k, long long mid)
{
    long long timeSum = 0;
    int c = 1;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > mid)
        {
            return false;
        }
        if(arr[i] + timeSum > mid)
        {
            c++;
            timeSum = arr[i];
            if(c>k)
            {
                return false;
            }
        }
        else{
            timeSum += arr[i];
        }
    }
    return true;
}

long long minTime(int arr[], int n, int k)
{
    long long start = 0;
    long long end = 0;
    for(int i=0; i<n; i++)
    {
        end += arr[i];
    }
    long long ans = -1;

    while(start <= end)
    {
        long long mid = start + (end - start) / 2;
        if(isPossibleSolution(arr, n, k, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {10, 20, 30, 40};

    int k = 2;                        
    int n = sizeof(arr) / sizeof(arr[0]);

    long long result = minTime(arr, n, k);
    
    if (result != -1)
    {
        cout << "Minimum time for Painters: " << result << endl;
    }
    else
    {
        cout << "Not possible to Paint the walls" << endl;
    }

    return 0;
}