#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int arr[3][3];

    int row = 3;
    int col = 3;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    int min = INT_MAX;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    cout<<"Minimum number is:- " <<min;
}