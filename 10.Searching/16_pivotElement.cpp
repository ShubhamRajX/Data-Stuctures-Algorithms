#include<iostream>
#include<vector>
using namespace std;

int findPivot(vector<int>arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start)/2;

    while(start <= end)
    {
        if(start == end)
        {
            // Single element
            return start;
        }
        if(mid <= end && arr[mid] > arr[mid + 1]){
            return mid;
        }
        if(mid - 1 >= start && arr[mid - 1] > arr[mid]){
            return mid - 1;
        }
        if(arr[start] > arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }

        mid = start + (end - start)/2;
    }
    return -1;
}

int main()
{
    vector<int>arr{9,10,2,4,6,8};
    // vector<int>arr{2,4,6,8,9,10};
    // vector<int>arr{8,9,10,2,4,6};
    // vector<int>arr{1,3};
    // vector<int>arr{2};

    int ans = findPivot(arr);

    if(ans == -1)
    {
        cout<<"Kuch to gadbad hai...." <<endl;
    }
    else{
        cout << "Ans is at Index " <<ans <<endl;
        cout << "Value of ans is " <<arr[ans] <<endl;
    }

    return 0;
}