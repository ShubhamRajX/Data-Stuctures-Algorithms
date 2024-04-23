#include<iostream>
using namespace std;

int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    int size = 8;

    int start=0;
    int end=size-1;

    while (start <+ end)
    {
        //step:1
        swap(arr[start], arr[end]);
        //step :2
        start++;
        end--;
    }
    //print array
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}