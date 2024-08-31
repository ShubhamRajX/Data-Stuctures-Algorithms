#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            // right search
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    int n;
    cout <<"Enter elements: ";
    cin>>n;

    vector<int>arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int result = peakIndexInMountainArray(arr);
    cout<<result;
}