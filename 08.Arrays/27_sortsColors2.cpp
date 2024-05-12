#include <iostream>
#include <vector>
using namespace std;

void sortColor(vector<int> &arr, int n)
{
    int l = 0;
    int m = 0;
    int h = arr.size() - 1;
    while (m <= h)
    {
        if (arr[m] == 0)
        {
            swap(arr[l], arr[m]);
            l++, m++;
        }
        else if (arr[m] == 1)
        {
            m++;
        }
        else
        {
            swap(arr[m], arr[h]);
            h--;
        }
    }
}

int main()
{
    int n;
    vector<int> arr{1, 2, 0, 0, 2, 1};

    sortColor(arr, n);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}