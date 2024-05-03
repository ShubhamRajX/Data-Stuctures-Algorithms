#include<iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    //Row-wise Print
    cout<<"Printing Row-wise Value"<<endl;
    for(int i=0;i<3;i++)
    {
        //for every row,need to print value in each column
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //Column-wise Print 
    cout<<"Printing Column-wise Value"<<endl;
    for(int i=0;i<3;i++)
    {
        //for every column,need to print value in each row
        for(int j=0;j<3;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}