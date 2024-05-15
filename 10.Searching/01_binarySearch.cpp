#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    int mid = (start + end)/2;

    while(start <= end)
    {
        int element = arr[mid];

        if(element == target)
        {
            return mid;
        }
        else if(target <element)
        {
            //search in left side
            end = mid + 1;
        }
        else{
            //search in right side
            start = mid +1;
        }

        mid = (start + mid)/2;
    }
    //element not found
    return -1;
} 

int main()
{
    int arr[] = {2,3,5,6,8,9,10,13,16};
    int size = 9;
    int target = 5;

    int result = binarySearch(arr, size, target);

    if(result == -1)
    {
        cout<<"Target element not found"<<endl;
    }
    else{
        cout<<"Target element found at "<<result<<" index"<<endl;
    }
}