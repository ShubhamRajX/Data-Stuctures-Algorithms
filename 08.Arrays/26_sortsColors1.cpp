#include<iostream>
#include<vector>
using namespace std;

void sortColor(vector<int>&arr,int n)
{
    int zeros,ones,twos;
    zeros=ones=twos=0;

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i] == 0)
        {
            zeros++;
        }
        else if(arr[i] == 1)
        {
            ones++;
        }
        else if(arr[i] == 2)
        {
            twos++;
        }
    }
    //spread
    int i=0;
    while(zeros --)
    {
        arr[i] = 0;
        i++;
    }
     while(ones --)
    {
        arr[i] = 1;
        i++;
    }
     while(twos --)
    {
        arr[i] = 2;
        i++;
    }
}

int main()
{
    int n;
    vector<int>arr{1,2,0,0,2,1};

    sortColor(arr,n);

    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}