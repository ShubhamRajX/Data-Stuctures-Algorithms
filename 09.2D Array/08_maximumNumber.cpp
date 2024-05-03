#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int arr[3][3];

    int row = 3;
    int col = 3;
    int max = INT_MIN;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    //printing value
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j] > INT_MIN)
            
            {
                max = arr[i][j];
            }
        }
        cout<<max;
    }
}