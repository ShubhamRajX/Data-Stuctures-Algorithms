#include<iostream>
using namespace std;

int main()
{
    // int arr[5];

    // cout<<"Enter values"<<endl;

    // for(int i=0;i<5;i++)
    // {
    //     cin>>arr[i];
    // }
    
    // cout<<"printing double values"<<endl;

    // for(int i=0;i<5;i++)
    // {
    //     cout<<2*arr[i]<<endl;
    // }

    int arr[100];

    int n;
    cout<<"hoe many numbers you want to enter"<<endl;

    cin>> n;
    
    cout<<"Enter the numbers;-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Doubles"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<2*arr[i] <<endl;
    }
}