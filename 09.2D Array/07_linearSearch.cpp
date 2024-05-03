#include<iostream>
using namespace std;

bool findKey(int arr[3][3],int row,int col,int key)
{
    for(int i=0;i,row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j] = 6)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[3][3] = {
        {5,6,8},
        {7,2,4},
        {1,6,9}};

    int row = 3;
    int col = 3;

    int key = 0;

    // int or bool both can use
    int find = findKey(arr,3,3,key);

    //here in if cond. you give "find" or "findKey(arr,3,3,key)"
    if (find)
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    // cout << find;
}