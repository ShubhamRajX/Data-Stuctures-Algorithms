#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // vector<vector<int> >arr;

    // vector<int> a{1,2,3};
    // vector<int> b{4,5,6};
    // vector<int> c{7,8,9};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    // for(int i=0;i<arr.size();i++)
    // {
    //     for(int j=0;j<arr[0].size();j++)
    //     {
    //         cout<<arr[i][j] <<" ";
    //     }
    //     cout<<endl;
    // }


    // vector<vector<int> >arr(3,vector<int>(5,12));
    // for(int i=0;i<arr.size();i++)
    // {
    //     for(int j=0;j<arr[0].size();j++)
    //     {
    //         cout<<arr[i][j] <<" ";
    //     }
    //     cout<<endl;
    // }


    // int row = 5;
    // int col = 6;

    // vector<vector<char> >arr(row,vector<char>(col,'A'));
    // for(int i=0;i<arr.size();i++)
    // {
    //     for(int j=0;j<arr[0].size();j++)
    //     {
    //         cout<<arr[i][j] <<" ";
    //     }
    //     cout<<endl;
    // }


    int row = 5;
    int col = 5;

    vector<vector<int> >arr(row,vector<int>(col,-8));
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[0].size();j++)
        {
            cout<<arr[i][j] <<" ";
        }
        cout<<endl;

    }
    cout<<arr[1][2];

    cin>>arr[3][6];

}