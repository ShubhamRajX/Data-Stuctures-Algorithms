#include<iostream>
using namespace std;

bool findKey(int arr[][3],int col,int row,int key)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j] == key)
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[3][3];

    int row = 3;
    int col = 3;

    int key = 80;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }

    if(findKey(arr,3,3,key))
    {
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}