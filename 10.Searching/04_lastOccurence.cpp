#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int>arr,int target)
{
    int start = 0;
    int end = arr.size() - 1;

    int mid = start + (end-start)/2;
    int ans = -1; 

    while(start <= end)
    {
        if (arr[mid] == target)
        {
            //store ans then search in right side
            ans = mid;
            start = mid  + 1;
        }
        else if(target < arr[mid])
        {
            //search in left
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            //search in right
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main()
{
    vector<int>arr{1,3,4,4,4,4,4,6,7,9};
    int target = 4;

    int result = firstOccurence(arr, target);

    cout<<"last occurence is: "<<result<<endl;
}