#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start)/2;

    while(start <= end)
    {
        if(start == end)
        {
            return start;
        }
        //2 cases -> mid - even or mid - odd
        if(mid % 2 == 0)
        {
            //Even
            if(arr[mid] == arr[mid + 1]){
                // Right Search
                start = mid + 2;
            }
            else{
                end = mid;
            }
        }
        else{
            if(arr[mid] == arr[mid - 1])
            {
                //Right Search
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        mid = start + (end - start)/2; 
    }
    return -1;
}

int main()
{
    // vector<int>arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
    // vector<int>arr{1,1,2,2,3,3,4,4,3,3,8,8,7,7,3,3,5,5,9,9,0,600,600,4,4};
    // vector<int>arr{1,1,2,2,3,3,4,4,600,600,4,4,12,12,2,2,4,4,7,7,98,98,7};
    // vector<int>arr{1,2,2,3,3,4,4,600,600,4,4,12,12,2,2,4,4,7,7,98,98};
    vector<int>arr{1,2,2,3,3,5};

    int ans = solve(arr);

    cout<<"Index is-> "<<ans <<endl;
    cout<<"Ans is-> "<<arr[ans] <<endl;

    return 0;
}