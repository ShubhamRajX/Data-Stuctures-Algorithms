#include<iostream>
#include<vector>
using namespace std;

void waveMatrix(vector<vector<int> > arr)
{
    int m = arr.size();
    int n = arr[0].size();

    for(int startCol=0;startCol<n;startCol++)
    {
        //even no. of cols -> print top to bottom
        if((startCol & 1) == 0)
        {
            for(int i=0;i<m;i++)
            {
                cout<<arr[i][startCol]<<" ";
            }
        }
        else{
            //odd no. of cols -> print bottom to top
            for(int i=m-1;i>=0;i--)
            {
                cout<<arr[i][startCol]<<" ";
            }
        }
    }
}

int main()
{
    int m;
    cout<<"Enter No.of Rows:- ";
    cin>>m;
    int n;
    cout<<"Enter No.of cols:- ";
    cin>>n;

    vector<vector<int> >arr(m,vector<int>(n));

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    waveMatrix(arr);
}