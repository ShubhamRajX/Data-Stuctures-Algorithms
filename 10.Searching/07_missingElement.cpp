#include<iostream>
#include<vector>
using namespace std;

int findPeakIndex(vector<int>arr)
    {
        int start = 0;
        int end = arr.size() - 1;
        int mid = start + (end - start)/ 2;

        while(start < end)
        {
            if(arr[mid] <arr[mid + 1])
            {
                //right search
                start = mid + 1;
            }
            else{
                end = mid;
            }
            mid = start + (end - start)/ 2;
        }
        return start;
    }

int main()
{
    int n;
    cout <<"Enter size: ";
    cin>>n;

    vector<int>arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int result = findPeakIndex(arr);

    cout<<"Peak element is at: "<<result<<" index"<<endl;
    cout<<"Peak element is: "<<arr[result]<<endl;
}