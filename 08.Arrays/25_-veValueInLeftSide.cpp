#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void moveAllNegToLeft(vector<int>&arr,int n)
{
    //Dutch National Flag Algo.

    int l = 0;
    int h = n-1;

    while(l<h)
    {
        if(arr[l]<0)
        {
            l++;
        }
        else if(arr[h]>0)
        {
            h--;
        }
        else{
            swap(arr[l],arr[h]);
        }
    }
}

int main()
{
    int n;
    cin>>n;

    vector<int>arr{n};

    cout<<"Enter Elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    moveAllNegToLeft(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}