#include<iostream>
#include<vector>
using namespace std;

int nearlySorted(vector<int> arr, int target)
{
    int start = 0;
    int end = 7;
    // int end = arr.size() - 1;
    int mid = start + (end - start)/2;
    
    while(start <= end)
    {
        if(arr[mid] == target)
        {
            return mid;
        }
        // if(mid + 1 < arr.size() && arr[mid + 1] == target)
        if(mid + 1 < end && arr[mid + 1] == target)
        {
            return mid + 1;
        }
        if(mid - 1 >= 0 && arr[mid -1] == target)
        {
            return mid - 1;
        }
        if(target > arr[mid])
        {
            //Right Search
            start = mid + 2;
        }
        else{
            //Left Search
            end = mid -2;
        }
        mid = start + (end - start)/2;
    }
    // return mid;
    return -1; 
}

int main()
{
    vector<int> arr{10,3,40,20,50,80,70};
    int target = 40;

    int answer = nearlySorted(arr, target);

    cout<<"Index of "<<target <<" is "<<answer <<endl;

    return 0;
}